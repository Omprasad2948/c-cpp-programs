
#include<stdio.h>  
int main()  {
	
	int num,rem,sum=0,fact,i;
	int temp;
	printf("Enter the number :\n");
	scanf("%d",&temp);
	
	int j;
	for(j=1;j<=temp;j++){
		sum=0;
		int num=j;
	while(num!=0)
	{
	rem=num%10;
	fact=1;
	for(i=1;i<=rem;i++)
	{
		fact=fact*i;
		}	
		sum=sum+fact;
		num=num/10;
	}
	//printf("%d\n",sum);
	if(j==sum)
	{
		printf("%d ",sum);
		
	}

}
	
	
	return 0;
}
