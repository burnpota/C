#include <stdio.h>
int main(void){
	char ascii;
	printf("ascii 문자로 변환할 숫자를 입력하세요 : __\b\b");
	scanf("%d", &ascii);
	printf("입력한 숫자의 ASCII 값은 %c입니다",ascii);

	return 0;
}
