#include<stdio.h>

void naturalNumReverse(int n){
	for(int i=n;i>=1;i--){
		printf("%d\t",i);
	}
}
int main(){
	
	
	int num;
	printf("Enter the nth natural number :\n");
	scanf("%d",&num);
	
	naturalNumReverse(num);
	
	
	return 0;
}
