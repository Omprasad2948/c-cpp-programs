#include<stdio.h>
int main(){
	
	for(int j=1;j<=5;j++){
		for(int i=1;i<10;i++){
			
			if(4+j<=i && 6-j>=i){
				if(i%j==0){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			
		}
		printf("\n");
		
	}
	
	return 0;
}
