#include <stdio.h>

int main(void){
	float weight;
	float value;

	printf("니 몸무게 가치 얼마?\n");
	
	scanf("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("당신의 몸무게를 플래티넘 가치로 계산하면 $%.2f입니다.\n", value);
	printf("당신의 몸값은 그 정도 가치가 나갑니다.\n");

	return 0;
}
