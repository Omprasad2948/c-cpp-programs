#include<stdio.h>
#include<conio.h>
int main(){
	
   int temp,num,sum=0,i=0,rem;
   
   printf("Enter the number \n");
    scanf("%d",&num);
   
   printf("Enter the number for following operation :\n");
   printf("1 :count digit of number \n");
   printf("2 :reverse digit of number \n");
   printf("3 :calculate sum of number \n");
  
   scanf("%d",&temp);
   switch(temp){
   	
   	case 1:
   		while(num>0){
   			num=num/10;
   			i++;
		   }
		   printf("The number is %d digit \n",i);
		   break;
		   
	case 2:
		while(num>0){
   			rem=num%10;
   			sum=sum*10+rem;
   			num=num/10;
		   }
		   printf("The number after reverse is %d \n",sum);
		   break;
		   
	case 3:
		while(num>0){
   			rem=num%10;
   			sum=sum+rem;
   			num=num/10;
		   }
		   printf("The sum of number is %d \n",sum);
		   break;   	
   	default:
   		printf("Invalid operation \n");
   		break;
   }
	
	
	
	return 0;
}
