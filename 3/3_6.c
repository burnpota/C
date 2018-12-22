#include <stdio.h>
int main(void){
	float quart = 950;
	float molcu = 3.0e-23;
	float scan, each;

	printf("물의 쿼트를 입력하세요 :");
	scanf("%f", &scan);
	
	each = scan * quart / molcu;
	printf("물 분자의 개수는 : %f", each);

	return 0;
}
