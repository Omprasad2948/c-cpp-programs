#include<stdio.h>
#include<conio.h>
int main(){
	/*    *
	     **
	    ***
	   ****
	  ***** 
	  */ 
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=9;j++){
			if(j<=5-i || j>=5+i){
				printf(" ");
			}
			else{
				if((i+j)%2==0){
					printf("*");	
				}
				else{
					printf(" ");n
				}
			
			}
			
		}
		printf("\n");
	}
	return 0;
}
