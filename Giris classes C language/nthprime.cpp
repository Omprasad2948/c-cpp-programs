#include<stdio.h>
int main(){
	
	int n,num,i,sum=0,count=0;
	printf("Enter the number :\n");
	scanf("%d",&num);
	n=1;
	while(n<=num)
	{
		count=0;
		i=2;
		while(i<n)
		{
			if(n%i==0)
			{
				count++;
				break;
			}
			i++;
		}
		if(count==0 && n!=1)
		{
			printf("%d ",n);
			sum=sum+n;
				
		}
		n++;
	}
	printf("\nThe sum of all prime number from 1 to n is %d ",sum);
	
	return 0;
}
