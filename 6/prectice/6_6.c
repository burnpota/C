#include <stdio.h>
int main(void){
	int n,m;
	printf("시작하는 정수를 입력하시오 : ");
	scanf("%d", &n);
	printf("끝나는 정수를 입력하시오 : ");
	scanf("%d", &m);
	printf(" 정수     제곱     세제곱\n");
	for(;n<=m;n++){
		printf("%3d %9d %9d\n", n, n*n, n*n*n);
	}
	return 0;
}
