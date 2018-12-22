#include <stdio.h>
#include <string.h>
int main(void){
	char first[20], last[20];
	int firstlen, lastlen;
	printf("이름");
	scanf("%s", first);
	printf("성");
	scanf("%s", last);
	
	firstlen = strlen(first);
	lastlen = strlen(last);
	printf("%s %s\n", first, last);
	printf("%*d %*d\n", firstlen, firstlen, lastlen, lastlen);
	printf("%s %s\n", first, last);
	printf("%-*d %-*d\n", firstlen, firstlen, lastlen, lastlen);
	

	return 0; }
