#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j%2==0){
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	return 0;
}
