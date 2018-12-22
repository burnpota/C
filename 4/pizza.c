#include <stdio.h>
#define PI 3.14159
int main(void){
	float area, circum, radius;

	printf("피자의 반지름이 얼마냐? :");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("피자의 기본 매개변수는 다음과 같다\n");
	printf("둘레 = %1.2f, 넓이 = %1.2f", circum, area);

	return 0; }
