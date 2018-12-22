#include <stdio.h>
float aaa(float p, float q);

int main(void){
	float i,j;
	int check;

	printf("두 실수를 입력하시오 : ");
	check = scanf("%f %f", &i, &j);
	while(check==2){
		printf("%f\n", aaa(i,j));
		printf("두 실수를 입력하시오 : ");
		check = scanf("%f %f", &i, &j);
	}
	return 0;
}

float aaa(float p, float q){
	float result;
	result = (p-q)/(p*q);

	return result;
}
