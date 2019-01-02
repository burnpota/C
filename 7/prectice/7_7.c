#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BREAK1 300.00
#define BREAK2 450.00
#define BASE1 (BREAK1 * RATE1)
#define BASE2 (BASE1 + (BREAK2 - BREAK1) * RATE2)
int main(void){
	float gross, net, extra, time, time_hab, tax;
	int ct;
	time_hab = 0;

	printf("일주일간 노동한 시간을 입력하시오\n");

	for(ct = 1 ; (scanf("%f", &time) == 1) && ct < 7 ; ct++){
		time_hab += time;
	}
	
	if(time_hab <= 40.0){
		gross = time_hab * 10.00;
	}else {
		gross = (time_hab - 40.0) * 10.00 * 1.5 + 40.0 * 10.0;
	}
	
	if(gross <= BREAK1){
		tax = gross * RATE1;
		net = gross - tax;
	}else if(gross <= BREAK2){
		tax = (gross - BREAK1) * RATE2 + BASE1;
		net = gross - tax;
	}else {
		tax = (gross - BREAK2) * RATE3 + BASE2;
		net = gross - tax;
	}
	
	//printf("일한 시간 : %.2f\n초과시간 : %.2f\n초과수당 : %.2f\n",time_hab, time_hab - 40, (time_hab - 40.0) * 10.00 * 1.5);
	printf("총소득 : %.2f\n세금  : %.2f\n순소득 : %.2f\n", gross, tax, net);
	return 0;
}
