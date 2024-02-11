#include<stdio.h>
int i=0;
//Array printing usig recursion.
void arrayprtrec(int a[],int size)  //Function Defination
{
	static int j=size-1;
	if(i<size/2){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
		arrayprtrec(a,size);
	}
	else{
		printf("\nThe array after reverse  :\n");
		for(i=0;i<size;i++){
			printf("%d\t",a[i]);
		}
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
