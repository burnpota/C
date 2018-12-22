#include <stdio.h>
int main(void){
	int week,friend;
	for(week=1,friend=5;friend<=150;++week){
		friend -= week;
		friend *= 2;
		printf("%d주에 %d명\n",week,friend);
	}
	printf("%d주 차에 Dunbar의 수를 초과함\n", week-1);
	return 0;
}
