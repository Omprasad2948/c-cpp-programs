#include<stdio.h>
#include<conio.h>
int main(){
	int num=1;
	char ch='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			
			if(i%2==0)
			{
			printf("%d",num);
			}
			else
			{
			printf("%c",ch);
				
			}
					
		}
		if(i%2==0){
			ch++;
		}
		else
		{
			num++;
		}
	
	printf("\n");
		
	}
	
	return 0;
}
