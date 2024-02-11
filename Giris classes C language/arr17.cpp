#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,count=0,ele;
	printf("Enter the index:\n");
	scanf("%d",&i);
	int a[i];
	int len =sizeof(a)/sizeof(a[0]);
	printf("Enter the Array:\n");
	for( i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	printf("The Array is:\n");
	for( i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("Enter the element to find occurence :\n");
	scanf("%d",&ele);
	for(i=0;i<len;i++){
		if(a[i]==ele){
			count++;
		}
	}
	printf("\n%d occur %d times",ele,count);

	return 0;	
}
