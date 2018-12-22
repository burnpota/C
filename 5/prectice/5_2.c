#include <stdio.h>
int main(void){
	int add, num;
	add=0;
	printf("정수 하나를 입력하세요 : ");
	scanf("%d",&num);
	while(add++ < 11){
		printf("%d\n",num);
		num++;
	}
	return 0;
}
