#include <stdio.h>
int main(void){
	double arr1[8], arr2[8];
	int i,j;

	for(i=0;i<8;i++){
		printf("%d번 수를 입력하시오: ",i);
		scanf("%lf", &arr1[i]);
		for(j=0,arr2[i]=0;j<=i;j++)
			arr2[i] += arr1[j];
	}

	for(i=0;i<8;i++){
		printf("%10.2f", arr1[i]);
	}
	printf("\n");
	
	for(i=0;i<8;i++){
		printf("%10.2f", arr2[i]);
	}
	return 0;
}
