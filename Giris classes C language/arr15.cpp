#include<stdio.h>
#include<conio.h>
int main(){
	
	
	int i,e=0;
	printf("Enter the length of an Array :\n");
	scanf("%d",&i);
	int a[i];
	int len= sizeof(a)/sizeof(a[0]);
	
	printf("Enter The Array :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		e++;
	}
	printf("\nThe Array is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}

   for(i=0;i<len-e;i++){
   	if(a[i]%2==0)
	   {
   		int temp=a[i];
   		for(int j=i;j<len;j++)
		   {
   			a[j]=a[j+1];
		   }
		   a[len-1]=temp;
	   }
   }
 printf("\nThe Array after shifting :\n");
 	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
  	return 0;
}

