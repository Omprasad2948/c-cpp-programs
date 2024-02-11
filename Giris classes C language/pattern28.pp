#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i<=j){
				printf("0  ");
		
			}
			else{
				printf("1  ");
				
			}
		}
		printf("\n");
	}
	
	return 0;
}
