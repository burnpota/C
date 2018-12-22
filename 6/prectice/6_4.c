#include <stdio.h>
int main(void){
	int i,j,k;
	k=0;
	char lets[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for(i=0;i<6;i++){
		for(j=0;j<=i;j++){
			printf("%c",lets[k]);
			k += 1;
		}
		printf("\n");
	}
		
	return 0;
}
