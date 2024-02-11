#include<stdio.h>
int main()
{
	 int a[24],len,i;
	 len=24;
	 printf("enter the isro signal :\n");
	 
	   for(i=0;i<24;i++)
	   {
	   	   scanf("%d",a[i]);   
	   	   
		}
		
	     	printf("thrr isro signal are");
			for(i=1;i<len;i++)
			{
				printf("%d",a[i]);
				     
			}
		
			int mid,temp,end;
			mid=12;
			printf("the reversed array");
			for(i=0;i<mid;i++)
			{
				temp=a[i];
				a[i]=end;
				end=a[i];
				end--; 	
				printf("%d\t",a[i]);	
			}
			
}
			
			
			
