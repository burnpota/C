#include <stdio.h>
int main(void){
	char first[20], last[20];
	printf("이름 : ");
	scanf("%s", first);
	printf("성 : ");
	scanf("%s", last);

	printf("너의 풀 네임 : %s %s\n", first, last);

	return 0; }
