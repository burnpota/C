#include <stdio.h>
#define S_PER_M 60
#define S_PER_H 3600
const double M_PER_K = 0.62137;
int main(void){
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;

	printf("이 프로그램은 미터단위계로 측정한 달리기 기록을\n"
			"1마일을 달린 시간과, 평균속도(mph)로 변환한다.\n"
			"달린 거리를 킬로미터 수로 입력하시오.\n");
	scanf("%lf", &distk);
	printf("달린 시간을 분 수와 초 수로 입력하시오.\n"
			"먼저 분 수부터 입력하시오.\n");
	scanf("%d", &min);
	printf("이제 초 수를 입력하시오.\n");
	scanf("%d", &sec);
	time = S_PER_M * min + sec;
	distm = M_PER_K * distk;
	rate = distm / time * S_PER_H;
	mtime = (double) time / distm; // time 변수는 int형이ㅈ만 distm은 float형이다 따라서 표현식 앞에 (double)로 cast를 추가하여 자료형을 변환한다.
	mmin = (int) mtime / S_PER_M;
	msec = (int) mtime % S_PER_M;
	printf("당신은 %1.2f킬로미터(%1.2f마일)을 %d분, %d초에 달렸다.\n",
			distk, distm, min, sec);
	printf("이 페이스는 1마일을 %d분, %d초에"
			"달린것에 해당한다.\n", mmin, msec);
	printf("평균속도는 %1.2f mph였다.\n", rate);

	return 0;
	}
