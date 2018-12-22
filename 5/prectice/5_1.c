#include <stdio.h>
#define PER_MIN 60;
int main(void){
	int time, sec;
	printf("시간을 입력하시오 (>=0) : ");
	scanf("%d",&time);
	while(time>0){
	sec = time*PER_MIN;
	printf("%d분이고 %d초다\n", time, sec);
	printf("시간을 입력하시오 (>=0) : ");
	scanf("%d",&time);
	}
	return 0;
}
