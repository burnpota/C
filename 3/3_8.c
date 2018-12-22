#include <stdio.h>
int main(void){
	float pint, cup, ounce, tablespoon, teaspoon;

	printf("컵 수치를 입력하세요 : ");
	scanf("%f",&cup);
	
	pint = cup * 2;
	ounce = cup / 8;
	tablespoon = ounce / 2;
	teaspoon = tablespoon / 3;

	printf("입력한 값은\n%.0fpints\n%founce\n%ftablespoon\n%fteaspoon\n입니다\n",pint, ounce, tablespoon, teaspoon);

	return 0;
}
