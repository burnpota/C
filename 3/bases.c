#include <stdio.h>

int main(void){
	int x;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &x);

	printf("10진수 = %d; 8진수 = %o; 16진수 = %x\n", x, x, x);
	printf("10진수 = %d; 8진수 =%#o; 16진수 = %#x\n", x, x, x);

	return 0;
}
