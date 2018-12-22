#include <stdio.h>
int main(void){
	int arr[8];
	int i,j;

	for(i=0,j=1;i<8;i++, j*=2){
		arr[i]=j;
	}

	do{
		printf("%-5d", arr[i-1]);
		i--;
	}while(i>0);

	return 0;
}
