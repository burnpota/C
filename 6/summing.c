#include <stdio.h>
int main(void){
	long num;
	long sum =0L;
	int status;

	printf("합을 구할 정수를 하나 입력하시오.");
	printf("(끝내려면 q): ");
	status = scanf("%ld", &num);
	while (status == 1){
		sum = sum + num;
		printf("다음 정수를 입력하시오(끝내려면 q):");
		status = scanf("%ld", &num);
	}
	printf("입력된 정수들의 합은 %ld입니다.\n", sum);
	return 0;
}
