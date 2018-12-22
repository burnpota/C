#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void){
	char name[40];

	printf("이름 : ");
	scanf("%s", name);
	printf("%zd 글자, 메모리셀 %zd개\n", strlen(name), sizeof name);
	printf("감탄문은 %zd글자", strlen(PRAISE));
	printf("메모리셀 %zd개. \n", sizeof PRAISE);

	return 0;
}
