#include <stdio.h>
int main(void){
	int i,j;
	float a,b,c,d;
	a=1.0;

	printf("원하는 항 수를 입력하세요 : ");
	scanf("%d",&j);
	while(j>0){
		for(i=1,b=1.0,c=0;i<=j;i++,b++){
			c += a/b;
		}
		printf("%f\n", c);
		for(i=1,b=1.0,c=0,d=-1.0;i<=j;i++,b++){
			c += a/b;
			d *= -1.0;
			c *= d;
		}
		printf("%f\n", c);
		printf("원하는 항 수를 입력하세요 : ");
		scanf("%d",&j);
	}		
	return 0;
}
