#include <stdio.h>
int main(void){
	int days, salary, add, sum;
	add = salary = sum = 0;
	printf("급여 수령 일수를 입력하세요 (양수) : ");
	scanf("%d", &days);
	while (add++ < days){
		sum = sum + ++salary;
		printf("$%-5d$%d\n",salary,sum);
	}
	return 0;
}
