#include <stdio.h>
int main(void){
	int i,j;
	char ch;

	printf("대문자 알파벳 하나를 입력하시오 :");
	scanf("%c", &ch);
	for(i='A';i<=ch;i++){
		for(j=0;j<ch-i;j++){
			printf(" ");
		}
		for(;j=ch-i;j++){
			printf("%c",i
		}
	}

	return 0;
}
