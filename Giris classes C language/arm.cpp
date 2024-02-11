#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int num,temp,sum=0,count=0,rem;
printf("Enter the number\n");
scanf("%d",&num);
temp=num;
while(temp>0){
	temp=temp/10;
	count++;
}	
while(num>0){
	rem=num%10;
	sum=sum+pow(rem,count);
	num=num/10;
}
printf("sum=%d\n",sum);
int num1=num;
if(num1==sum){
	printf("armstrong number\n");
}
else{
	printf("not armstrong number\n");
}

}
