#include<stdio.h>
#include<conio.h>
int main(){
	 	for(int i=1;i<=5;i++)
	{
//      int n=i;
//		int k=4;
		for(int j=1;j<=5;j++)
		{
			
			if(j>=6-i){
			    
			  	printf("*");
			  	
					
			}
			else
			{
					//n=i;
				printf(" ");
			}
			
			
		}
		printf("\n");
	}
	
	return 0;
}
