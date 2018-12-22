#include <stdio.h>
int main(void){
	int sum, add, salary, days;
	sum=add=0;
	printf("급여 일수를 입력하세요(양수) : ");
	scanf("%d", &days);
	while(add++<days){
		salary = add * add;
		sum = sum + salary;
		printf("$%-5d$%d\n",salary,sum);
	}
	return 0;
}
