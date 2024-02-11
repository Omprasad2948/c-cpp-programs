#include<stdio.h>
int i=0;
//Array printing usig recursion.
void arrayprtrecmax(int a[],int size)  //Function Defination
{
	static int max=a[0];
	static int min=a[0];
	if(i<size){
		printf("%d\t",a[i]);
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
		i++;
		arrayprtrecmax(a,size);
	}
	else{
		printf("\nThe max number in array is %d",max);
		printf("\nThe min number in array is %d",min);
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
//	int max=a[0];
//	int min=a[0];
	arrayprtrecmax(a,size);
	
	
	return 0;
}
