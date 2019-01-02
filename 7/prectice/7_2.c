#include <stdio.h>
int main(void){
	char ch;
	int count=0;

	while((ch = getchar()) != '#'){
		count++;
		printf("%03d ",ch);
		if(count % 8 == 0){
			count = 0;
			printf("\n");
		}
		if(ch == '\n')
			putchar('\n');
	}
	return 0;
}
