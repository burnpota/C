#include <stdio.h>
int main(void){
	int i1,i2,i3;
	printf("이 프로그램은 모듈러스(두 수를 나눈 나머지)를 구하는 프로그램이다.\n");
	printf("두 번째 피연산자로 제공할 정수를 입력하시오. : ");
	scanf("%d", &i2);
	printf("이제 첫 번째 피연산자를 입력하시오. : ");
	scanf("%d", &i1);
	while(i1>0){
		i3 = i1 % i2;
		printf("%d %% %d = %d\n", i1, i2,i3);
		printf("첫 번째 피연산자용 다음 수를 입력하시오. : ");
		scanf("%d", &i1);
	}
	printf("종료\n");
	return 0;
}
