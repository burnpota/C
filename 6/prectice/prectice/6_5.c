#include <stdio.h>
int main(void){
	int i,j,k,l,m;
	char ch;
	printf("대문자 알파벳을 입력하시오 : ");
	scanf("%c", &ch);
	for(i='A',m=1;i<=ch;i++,m++){
		k = (int) ch - i + 1;
		printf("%*c", k, 'A');
		for(j='A';j<i;j++){
			printf("%c",j+1);
		}
		for(l=1;l<m;l++){
			printf("%c",j-l);
		}
		printf("\n");
	}
	return 0;
}
