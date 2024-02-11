#include<stdio.h>
void firstLast(int n)
{
	int temp=n,rem;
	while(n!=0)  // 123
	{
		 rem=n%10; // 3  2  1
		n=n/10;     // 12   1
	}
	printf("The first number is %d",rem);
	
	n=temp;
    
    n=n%10;
	printf("\nThe last number is %d",n);
}
int main(){
	
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	firstLast(num);
	return 0;
}
