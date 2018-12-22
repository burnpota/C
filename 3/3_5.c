#include <stdio.h>
int main(void){
	float age;
	float sec;
	float multiple;
	sec = 3.156e7;

	printf("나이를 입력하세요 : __\b\b");
	scanf("%f",&age);
	multiple = age * sec;
	printf("태어난지 %f초 지났습니다\n", multiple);

	return 0;
}
