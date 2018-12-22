#include <stdio.h>

double Fehr, Cels, Abso;
void Temperatures(double n);

int main(void){
	int check;
	printf("화씨 온도를 입력하세요 : ");
	check = scanf("%lf", &Fehr);
	while(check == 1){
		Temperatures(Fehr);
		printf("화씨 온도를 입력하세요 : ");
		check = scanf("%lf", &Fehr);
	}
	return 0;
}

void Temperatures(double n){
	const double CEL_1=5.0/9.0;
	const double CEL_2=32.0;
	const double ABS_1=273.16;

	Cels = CEL_1 * (n - CEL_2);
	Abso = Cels + ABS_1;

	printf("%.2fF%10.2fC%10.2fK\n", n, Cels, Abso);
}
