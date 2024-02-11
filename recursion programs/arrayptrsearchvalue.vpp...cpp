#include<stdio.h>
int i=0;
//Array printing usig recursion.
void arrayprtrec(int a[],int size,int s)  //Function Defination
{
	static int flag=0;
	if(i<size){
		printf("%d\t",a[i]);
		if(a[i]==s){
			flag=1;
		}
		i++;
		arrayprtrec(a,size,s);
	}
	else{
		if(flag==1){
			printf("\nThe number is Avaiable.");
		}
		else{
			printf("\nThe number is not Available.\n");
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
	int svalue;
	printf("\nEnter the number to search :\n");
	scanf("%d",&svalue);
	arrayprtrec(a,size,svalue);
	
	
	return 0;
}
