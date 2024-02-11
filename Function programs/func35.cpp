#include<stdio.h>

void primeNum(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		int flag=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
			}
		}
		if(flag==0 && i!=1){
			printf("%d\t",i);
			sum=sum+i;
		}
	}
	printf("\n\nThe sum between all prime number 1 to n is %d",sum);
}
int main(){
	printf("Enter the nth number :\n");
	int num;
	scanf("%d",&num);
	primeNum(num);
	
	return 0;
}
