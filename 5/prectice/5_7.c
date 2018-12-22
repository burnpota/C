#include <stdio.h>

void sejegob(float n);

int main(void){
	float inser;
	printf("양의 실수 하나를 적으세요 : ");
	scanf("%f", &inser);
	sejegob(inser);
	return 0;
}

void sejegob(float n){
	n = n * n * n;
	printf("%f",n);
}
