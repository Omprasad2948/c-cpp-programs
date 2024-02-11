#include<stdio.h>
#include<conio.h>
int main(){
	
	int i;
	printf("Enter the size of array :\n");
	scanf("%d",&i);
	int a[i],len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the element in Array :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe aray is:\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\narray after sorting in ascending order:\n");
	for(i=0;i<len-1;i++){
		for(int j=(i+1);j<len;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	int l=0,r=(len-1),mid=len/2,flag=0;
	int svalue;
	printf("\nEnter the value to searching :\n");
	scanf("%d",&svalue);
	while(l<=r){
		mid=r+(l-r)/2;
		if(a[mid]==svalue){
			flag=1;
			break;
		}
		if(a[mid]<svalue){
			r=mid+1;
		}
		else{
			l=mid-1;
		}
	}
	if(flag==1){
		printf("Found");
	}
	else
	{
		printf("Not found");
	}
	
	return 0;
}
