#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(j>=i&&j<=10-i){
				if((i+j)%2==0){
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		
	}
	return 0;
}
