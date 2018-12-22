#include <stdio.h>
#include <string.h>
int main(void){
	char name[20];
	int namele;

	printf("이름 : ");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	namele = strlen(name);
	printf("%*s\n", namele + 3, name);

	return 0; }
