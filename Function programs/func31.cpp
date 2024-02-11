#include<stdio.h>
void hcf(int a,int b){
	int max=1;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			max=i;
		}
	}
	printf("The HCF is %d",max);
}
int main(){
	
	int a,b;
	printf("Enter the first number :\n");
	scanf("%d",&a);
	printf("Enter the second number :\n");
	scanf("%d",&b);
	 hcf(a,b);
	return 0;
}
