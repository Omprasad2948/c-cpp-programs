#include<stdio.h>
#include<conio.h>
int main(){
	int temp;
	printf("Enter temperature in celcius :\n");
	scanf("%d",&temp);
	if(temp<0)
	{
	printf("Freezing Weather !\n");	
	}
	else if(temp>=0 && temp <10)
	{
	printf("Very Cold Weather !\n");	
	}
	
	if(temp>10 && temp<20)
	{
	printf("Cold Weather !\n");	
	}
	
	if(temp>=20 && temp <30)
	{
	printf("Normal in temperature !\n");	
	}
	
	if(temp>=30 && temp <40)
	{
	printf("Its hot !\n");	
	}
	
	if(temp>=40)
	{
	printf("Its very Hot !\n");	
	}
	
	return 0;
}
