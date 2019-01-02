#include <stdio.h>
int main(void){
	char ch;
	int space, enter, character, etc;
	
	space = enter = character = etc =0;

	printf("문자열을 입력하시오\n");
	while((ch = getchar()) != '#'){
		character++;
		if(ch == ' ')
			space++;
		else if(ch == '\n')
			enter++;
		else 
			etc++;
	}
	printf("스페이스 수 : %d\n", space);
	printf("엔터 수     : %d\n", enter);
	printf("공백 제외   : %d\n", etc);
	printf("총 문자 수: %d\n", character);
		
	return 0;
}
