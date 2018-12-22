#include <stdio.h>
int main(void){
	int i,j,k;
	k=0;
	
	printf("정수로 하한과 상한을 입력하시오: ");
	scanf("%d %d", &i, &j);
	while(i<j){
		printf("%d부터 %d까지, 제곱들의 합은 ", i*i, j*j);
		for(;i<=j;i++){
			k += i*i;
		}
		printf("%d\n",k);
		k=0;
		printf("정수로 하한과 상한을 입력하시오: ");
		scanf("%d %d", &i, &j);
	}
	printf("종료!\n");
	return 0;
}
