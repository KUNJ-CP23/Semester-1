//7.2 star hash
#include<stdio.h>
void main(){
	int i,n,j;
	for(i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			if(i%2==0){
				printf("#");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
