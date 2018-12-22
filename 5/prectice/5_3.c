#include <stdio.h>
#define DEF_WEEK 7
int main(void){
	int day, week, left;
	printf("날 수를 입력하세요(양수가 아니면 종료) : ");
	scanf("%d",&day);
	while(day>0){
		week = day / DEF_WEEK;
		left = day % DEF_WEEK;
		printf("%d주 %d일\n", week, left);
		printf("날 수를 입력하세요(양수가 아니면 종료) : ");
		scanf("%d",&day);
	}
	return 0;
}
