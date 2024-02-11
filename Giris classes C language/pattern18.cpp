#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(j>=0+i && j<=10-i)
			{
				printf("*");
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
