#include<stdio.h>
#include<conio.h>
int main(){
	
	int size,*ptr,i,j,count;
	int a[5];
	printf("Enter the size of an array :\n");
//	scanf("%d",&size);
//	int a[size];
	ptr=a;
	printf("\nEnter the element in the array :\n");
	for(i=0;i<5;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nThe element in the array :\n");
	for(i=0;i<5;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\nPrime no:\n");
	int temp=0;
    for(i=0;i<5;i++)
    {   
    count=0;
    	for(j=1;j<=*(ptr+i);j++)
    	{
    		if(*(ptr+i)%j==0)
    		{
    			count++;
			}
		}
    if(count==2)
	{
		printf("%d\t",*(ptr+i));
		temp++;
	}	
	}
	printf("\nThe count is %d",temp);
	
}
