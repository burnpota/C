#include <stdio.h>
int main(void){
	int arr, hol, jjak, hol_hap, jjak_hap;
	float hol_av, jjak_av;

	hol=jjak=hol_hap=jjak_hap=hol_av=jjak_av=0;
	printf("정수를 입력하세요 (음수는 무시, 0을 입력하면 종료)\n");
	while((scanf("%d", &arr)) == 1) {
		if(arr == 0)
			break;
		if(arr < 0)
			continue;
		if(arr % 2 == 0){
			jjak++;
			jjak_hap += arr;		
		} else {
			hol++;
			hol_hap += arr;
		}
	}
	if(hol > 0)
		hol_av = (float) hol_hap / hol;
	if(jjak > 0)
		jjak_av = (float) jjak_hap / jjak;
	printf("홀수의 개수 : %d\n", hol);
	printf("홀수의 평균 : %.2f\n", hol_av);
	printf("짝수의 개수 : %d\n", jjak);
	printf("짝수의 평균 : %.2f\n", jjak_av);


	return 0;
}
