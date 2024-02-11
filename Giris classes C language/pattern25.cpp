#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			
			if((j>5-i && i<=5) && (j<5+i && i<=5) ||(i>=5 && i<=j+4) &&  (i>=5 && i<=14-j) ){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		
	}
	
	
	return 0;
}
