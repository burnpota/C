#include <stdio.h>
int main(void){
	const float DAN=100*0.1;
	const float BOK=0.05;
	float Daphne, Deirdre;
	int i,j;
	for(i=0,Daphne=100,Deirdre=100;Deirdre<=Daphne;){
		++i;
		Daphne += DAN;
		Deirdre += BOK*Deirdre;
	}
	printf("%d년차에 역전!!\n",i);
	printf("Daphne의 저축액 : %.2f\n", Daphne);
	printf("Deirdre의 저축액 : %.2f\n", Deirdre);

	return 0;
}
