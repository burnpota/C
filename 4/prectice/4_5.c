#include <stdio.h>
int main(void){
	float fisize, speed;

	printf("파일의 MB 단위와 속도를 입력하세요\n");
	scanf("%f %f", &fisize, &speed);

	printf("초당 %.2f 메가비트, %.2f메가바이트 파일을"
		"\n%.2f초에 다운로드한다", speed, fisize, fisize*8/speed);

	return 0; }
