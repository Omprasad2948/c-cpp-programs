#include<stdio.h>
#include<conio.h>
int main(){
	char ch='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			
			printf("%c",ch);
			ch++;		
		}
	ch=ch-4;
	printf("\n");
		
	}
	
	return 0;
}
