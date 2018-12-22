#include <stdio.h>
int main(void){
	const double with=100000;
	const double rate=1.08;
	double lotto=1000000;
	int i;

	for(i=0;lotto>0;){
		++i;
		lotto -= with;
		printf("%d년차 인출 후 %f달러\n", i, lotto);
		lotto *= rate;
		printf("%d년차 %f달러\n", i, lotto);
	}
	printf("%d년 걸렸다\n", i);
	return 0;
}
