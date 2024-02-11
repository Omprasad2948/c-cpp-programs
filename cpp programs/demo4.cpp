#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[]={5732,8659,2534,};
	int temp,len;
	len=sizeof(a)/sizeof(a[0]);
	temp=len;
	for(int i=0;i<len;i++)
	{
		a[i]=a[i]*100+temp;
		temp--;
	}
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
