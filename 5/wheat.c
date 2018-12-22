#include <stdio.h>
int main(void){
	const int SQUARE = 64;
	const double CROP = 2E16;
	double current, total;
	int count = 1;

	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
	while (count < SQUARE) {
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
		}
	
	return 0; }
