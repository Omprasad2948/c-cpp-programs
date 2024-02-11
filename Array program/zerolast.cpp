#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,len,temp;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe array after shifting all zeroes to end :\n");
	int end=(len-1),res=0;
	for(i=0;i<len;i++){
	  if(a[i]!=0){
	  temp=a[i];
	  a[i]=a[res];
	  a[res]=temp;
	  res++;
	  
	  }
	}
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
}
