#include<stdio.h>
int n=1;
void primenum(int num){
//	for(int i=1;i<=num;i++){
//		int count=0;
//		for(int j=1;j<=num;j++){
//			if(i%j==0){
//				count++;
//			}
//		}
//		if(count==2){
//			printf("%d\t",i);
//		}
//	}

	if(n<=num){
		int count=0;
		for(int j=1;j<=n;j++){
			if(n%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\t",n);
		}
		n++;
		primenum(num);
	}
}

int main(){
	
	int num;
	printf("Enter the nth number :\n");
	scanf("%d",&num);
	primenum(num);
	
}
