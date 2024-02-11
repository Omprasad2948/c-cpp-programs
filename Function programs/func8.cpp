#include<stdio.h>

void naturalNum(int n){
	for(int i=1;i<=n;i++){
		printf("%d\t",i);
	}
}
int main(){
	
	
	int num;
	printf("Enter the nth natural number :\n");
	scanf("%d",&num);
	
	naturalNum(num);
	
	
	return 0;
}
