#include<stdio.h>
#include<conio.h>
int main(){
	
int num,rem,flag=0;
printf("Enter the number \n");
scanf("%d",&num);
while(num>0){
	
	rem=num%10;
	if(rem==0){
	flag=1;
	}
	num=num/10;
	
}
if(flag==1)
{
	printf("duck number");
}else
{
	printf("not duck number");
}
	
	
	return 0;
}
