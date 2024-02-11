//print the prime factor 

#include<stdio.h>
#include<conio.h>
int main(){
	
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	int c=2;
	while(num>1){
		
		if(num%c==0)
		{
			printf("%d ",c);
			num=num/c;
		}
		else
		{
			c++;
		}
	}
	
	
	return 0;
}
