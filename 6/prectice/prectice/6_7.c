#include <stdio.h>
#include <string.h>
int main(void){
	char ch[50];
	int i;
	printf("아무 단어나 입력하세요 : ");
	scanf("%s", ch);
	printf("%d\n",strlen(ch));
	for(i=strlen(ch);i>0;i--)
		printf("%c",ch[i-1]);

	return 0;
}
