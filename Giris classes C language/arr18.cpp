#include<stdio.h>
#include<conio.h>
int main(){
	 
	 int i,sum=0;
	 printf("Enter the size :\n");
	 scanf("%d",&i);
	 int a[i];
	 int len=sizeof(a)/sizeof(a[0]);
	 printf("Enter the array:\n");
	 for(i=0;i<len;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("Sum is :\n");
	 for(i=0;i<len;i++)
	 {
	 	sum=sum+a[i];
	 }
	 printf("%d",sum);
	 
	 return 0;
}
