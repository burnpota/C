#include <stdio.h>
int main(void){
	int arr[8];
	int i,j;
	printf("정수 8개 입력해\n");
	for(i=0;i<8;i++){
		printf("%d번에 들어갈 정수 : ", i);
		scanf("%d", &arr[i]);
	}
	printf("이제 역순으로 출력한다\n");
	for(j=7;j>=0;j--){
		printf("%2d", arr[j]);
	}
	return 0;
}
