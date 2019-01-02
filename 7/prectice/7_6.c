#include <stdio.h>
int main(void){
	char ch, chb;
	int i = 0;

	while((ch = getchar()) != '#'){
		if(chb == 'e' && ch == 'i')
			i++;
		chb = ch;
	}
	printf("ei가 나타난 횟수 : %d\n", i);
	return 0;
}
