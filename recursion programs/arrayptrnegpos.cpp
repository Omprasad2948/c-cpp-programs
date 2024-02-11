#include<stdio.h>
int i=0;
//Array printing usig recursion.
void arrayprtrecneg(int a[],int size)  //Function Defination
{
	if(i<size){
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
		
		i++;
		arrayprtrecneg(a,size);
	}
	
}
void arrayprtrecpos(int a[],int size)  //Function Defination
{
	static int i=0;
	if(i<size){
		if(a[i]>0)
		{
			printf("%d\t",a[i]);
		}
		
		i++;
		arrayprtrecpos(a,size);
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
	printf("\nThe negative elements are :\n");
	arrayprtrecneg(a,size);
	printf("\nThe positive elements are :\n");
	arrayprtrecpos(a,size);
	
	
	return 0;
}
