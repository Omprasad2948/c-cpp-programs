#include<stdio.h>
int i=0;
//Array printing usig recursion.
void arrayprtrec(int a[],int size)  //Function Defination
{
	if(i<size){
		printf("%d\t",a[i]);
		i++;
		arrayprtrec(a,size);
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
	arrayprtrec(a,size);
	
	
	return 0;
}
