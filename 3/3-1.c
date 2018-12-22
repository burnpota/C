#include <stdio.h>
int main(void){
	int a;
	float b;

	a = 2147483647;
	b = 0.1e12;

	printf("%d %f\n", a, b);

	return 0;
}
