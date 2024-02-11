#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,rem,rn=0;
	printf("Enter the number ");
	scanf("%d",&num);
	
	while(num>0){
	rem=num%10;
	rn=rn*10+rem;
	num=num/10;
}				

	printf("The reverse num is %d",rn);
	
	
	
	return 0;
}
