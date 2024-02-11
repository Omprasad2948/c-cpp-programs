#include<stdio.h>
#include<conio.h>
int main(){
	
	
	int n=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=6-i;j--){
			if(j==5||j==4||j==3||j==2||j==1){
				printf("%d\t",n);
				n++;	
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

