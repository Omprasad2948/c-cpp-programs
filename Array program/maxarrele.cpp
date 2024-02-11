#include<stdio.h>
#include<conio.h>
int main(){
	int a[10],i,len,j,max;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<len;i++){
		max=a[i];
		for(j=i;j<=i+3;j++){
			if(a[j]>max){
				max=a[j];
			}
		}
		printf("\n......>%d",max);
		if(i==6){
			break;
		}
	}
	
	return 0;
}
