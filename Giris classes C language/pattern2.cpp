#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=6-i;j++){
			if(j==1||i==1||j==6-i){
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
