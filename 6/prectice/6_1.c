#include <stdio.h>
int main(void){
	const int MAX=26;
	char alpha[MAX];
	char ch;
	int i;

	for(i=0, ch='a';i<MAX;i++,ch=ch+1)
		printf("%3c", ch);

	return 0;
}
