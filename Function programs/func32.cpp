#include<stdio.h>
void lcm(int a,int b){
	int max=1;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			max=i;
		}
	}
	printf("The LCM is %d",a*b/max);
}
int main(){
	
	int a,b;
	printf("Enter the first number :\n");
	scanf("%d",&a);
	printf("Enter the second number :\n");
	scanf("%d",&b);
	 lcm(a,b);
	return 0;
}
