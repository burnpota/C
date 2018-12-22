#include <stdio.h>
int main(void){
	float height, inch;

	printf("당신의 키를 입력하세요(cm) : ");
	scanf("%f", &height);
	inch = height * 2.54;
	printf("당신의 키는 %f인치입니다.\n", inch);

	return 0;
}
