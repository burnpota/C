#include <stdio.h>
int main(void){
	char name[20];
	float height;

	printf("이름과 키를 입력하시오\n");
	scanf("%s %f", name, &height);

	printf("%s씨, 당신의 키는 %.2f미터 입니다.\n", 
			name, height/100);
	
	return 0; }
