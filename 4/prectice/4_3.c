#include <stdio.h>
int main(void){
	float a;

	printf("입력 : ");
	scanf("%f", &a);
	printf("입력된 것은 %.1f 또는 %.1e이다.\n", a, a);
	printf("입력된 것은 %+.3f 또는 %.3E이다.\n", a, a);

	return 0; }
