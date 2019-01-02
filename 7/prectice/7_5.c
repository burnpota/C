#include <stdio.h>
int main(void){
	char ch;
	int ma_ct, nu_ct;

	ma_ct = nu_ct = 0;

	while((ch = getchar()) != '#'){
		switch(ch){
			case  '.' : ch = '!'; putchar(ch); ma_ct++; continue;
			case  '!' : putchar(ch); putchar(ch); nu_ct++; continue;
			default : putchar(ch);
		}
	}
	printf("마침표 변경 : %d\n", ma_ct);
	printf("느낌표 변경 : %d\n", nu_ct);
	return 0;
}
