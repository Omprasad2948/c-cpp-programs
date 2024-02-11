#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,count=1,temp;
	printf("Enter the index:\n");
	scanf("%d",&i);
	int a[i];
	int len =sizeof(a)/sizeof(a[0]);
	printf("Enter the Array:\n");
	for( i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	printf("The Array is:\n");
	for( i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
//	printf("The Array After sorting :\n");
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<len;i++){
		if(a[i]==a[i+1]){
			count++;
			}
			else
			{
				printf("\nThe %d is at %d time\n",a[i],count);
				count=1;
			}
		}
	
	return 0;
}
