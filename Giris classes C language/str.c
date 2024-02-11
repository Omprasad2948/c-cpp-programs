// find all strong number from 1 to n
#include<stdio.h>
#include<conio.h>
int main(){
	int num,fact,sum=0,rem,i,temp;
	printf("Enter the number :\n");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		fact=1;
		rem=num%10;
		for(i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	printf("%d\n",sum);
	if(sum==i){
		printf("%d ",sum);
	}
	else  
	{
		printf("The number is not strong number.");
	}
	
	return 0;
}
