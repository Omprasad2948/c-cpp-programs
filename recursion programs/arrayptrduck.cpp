#include<stdio.h>
int i=0;
//Array printing usig recursion.
void arrayprtrec(int a[],int size)  //Function Defination
{
	int temp=a[i];
	if(i<size){
		int flag=0;
		while(temp!=0){
			int rem=temp%10;
			if(rem==0){
				flag=1;
				break;
			}
			temp=temp/10;
		}
		if(flag==1){
			printf("\n%d is duck number\n",a[i]);
		}
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
