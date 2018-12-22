#include <stdio.h>
int main(void){
	const float GALLAN = 3.785;
	const float MILE = 1.609;
	float faway, gasoline, kilo, litre;

	printf("주행거리 : ");
	scanf("%f", &faway);
	printf("소비한 휘발유 : ");
	scanf("%f", &gasoline);
	printf("갤런당 마일 수 : %.1f\n", faway/gasoline);
	kilo = faway / MILE;
	litre = gasoline / GALLAN;
	printf("리터당 키로수 : %.1f\n", litre/kilo);

	return 0; }
