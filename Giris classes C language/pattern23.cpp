#include<stdio.h>
#include<conio.h>
int main(){
	int n=5;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d\t",n);
		
		}
			n--;
		printf("\n");
	}
	return 0;
}
