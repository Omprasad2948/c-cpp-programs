#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=5;i++)
	{
		
		char ch='A';
		for(int j=1;j<=i;j++)
		{
		printf("%c",ch);
		ch++;
		}
			
		printf("\n");
	}
	return 0;
}
