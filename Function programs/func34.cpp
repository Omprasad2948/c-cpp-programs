#include<stdio.h>

void primeNum(int n){
	
	for(int i=1;i<=n;i++){
		int flag=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
			}
		}
		if(flag==0 && i!=1){
			printf("%d\t",i);
		}
	}
}
int main(){
	printf("Enter the nth number :\n");
	int num;
	scanf("%d",&num);
	primeNum(num);
	
	return 0;
}
