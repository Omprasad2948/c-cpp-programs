#include<stdio.h>
int i=0;
int sum=0;
void arrayprtrecsum(int a[],int size)  //Function Defination
{	
	if(i<size){
		printf("%d\t",a[i]);
		sum=sum+a[i];
		i++;
		arrayprtrecsum(a,size);
	}
	else{
		printf("\nThe sum of an array is %d",sum);
	}
	
}
int main(){
	 int i,size;
	 printf("Enter the size:\n");
	 scanf("%d",&size);
	int a[size];
	printf("The array is:\n");
	for(i=0;i<size;i++)
	{
		 scanf("%d",&a[i]);
		 
	} 
	arrayprtrecsum(a,size);
	
	
	return 0;
}
