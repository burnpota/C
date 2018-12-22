#include <stdio.h>
int main(void){
	float i,j,k;
	int check;
	
	printf(" 두 개의 실수를 입력하세요 : ");
	check=scanf("%f %f", &i, &j);
	while(check==2){
		k=(i-j)/(i*j);
		printf("%f\n", k);
		printf(" 두 개의 실수를 입력하세요 : ");
		check=scanf("%f %f", &i, &j);
	}
	return 0;
}
