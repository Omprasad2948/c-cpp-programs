#include<stdio.h>
#include<conio.h>
int main(){
	
	//find the min and max value in array
	
	int a[5],len,i,max,min;
	printf("Enter the elements in the array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Display the arry value \n");
	max=a[0];
	min=a[0];
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
		if(a[i]>max){
			max=a[i];
		}
			if(a[i]<min){
			min=a[i];
		}
	}
	printf("\nMax value is %d\n",max);
	printf("\nMin value is %d\n",min);
	
	return 0;
}
