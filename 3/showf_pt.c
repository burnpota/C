#include <stdio.h>
int main(void){
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f는 %e로 표현할 수 있다.\n", aboat, aboat);
	printf("그것은 16진수 2의 거듭제곱으로 %a다.\n", aboat);
	printf("%f는 %e로 표현할 수 있다.\n", abet, abet);
	printf("%Lf는 %Le로 표현할 수 있다.\n", dip, dip);

	return 0;
}
