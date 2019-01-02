#include <stdio.h>
int main(void){
	char ch;
	int ma_ct, nu_ct;
	ma_ct = nu_ct = 0;

	while((ch = getchar()) != '#'){
		if(ch == '.'){
			ch = '!';
			ma_ct++;
		}else if(ch == '!'){
			putchar(ch);
			nu_ct++;
		}
		putchar(ch);
	}
	putchar('\n');
	printf("마침표 변경 : %d\n느낌표 변경 : %d\n", ma_ct, nu_ct);
	return 0;
}
