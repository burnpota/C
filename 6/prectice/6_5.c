#include <stdio.h>
int main(void){
<<<<<<< HEAD
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
=======
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

>>>>>>> 9c56b2f3d95581dcc27cf6b83b7cccf71b1cae30
	return 0;
}
