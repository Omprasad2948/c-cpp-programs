#include<stdio.h>
#include<conio.h>
int main(){
	int a[]={12,8,5,13,1};
	for(int i=0;i<5;i++){
		for(int j=(i+1);j<5;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The Array After Sortig :\n");
	for(int i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe Misiing Elements Are :\n");
	for(int i=0;i<5;i++){
		int f=a[i];
		int s=a[i+1];
		for(int k=(f+1);k<s;k++){
			printf("%d\t",k);
		}
	//	printf("\n");
	}
	return 0;
}
