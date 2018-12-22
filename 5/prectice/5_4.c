#include <stdio.h>
#define MOD_FEET 30.48
int main(void){
	float cm, inch;
	int feet;
	printf("센티미터 단위로 키를 입력하시오 (양수가 아닐 시 자동종료) : ");
	scanf("%f", &cm);
	while(cm > 0){
		feet = cm/MOD_FEET;
		inch = (cm/MOD_FEET - feet) * 12;
		printf("%.1f센티미터는 %d피트, %.1f인치입니다\n", cm, feet, inch);
		printf("센티미터 단위로 키를 입력하시오 (양수가 아닐 시 자동종료) : ");
		scanf("%f", &cm);
	}
	printf("안녕!\n");
	return 0;
}
