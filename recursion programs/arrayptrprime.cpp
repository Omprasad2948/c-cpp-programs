#include<stdio.h>
int i=0;

//Array printing usig recursion.
void arrayprtrecprime(int a[],int size)  //Function Defination
{
	if(i<size){
		int count=0;
		for(int j=1;j<=a[i];j++){
			if(a[i]%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\t",a[i]);
		}
		i++;
		arrayprtrecprime(a,size);
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
	arrayprtrecprime(a,size);
	
	
	return 0;
}
