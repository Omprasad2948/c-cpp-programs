#include<stdio.h>
void strongNum(int n){
	for(int j=1;j<=n;j++){
		int temp=j,rem,fact,sum=0;
	while(temp!=0){
		fact=1;
		rem=temp%10;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}	
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==j){
		printf("%d\t",j);
	}
	}
	
}
int main(){
	int num;
	printf("Enter nth the number :\n");
	scanf("%d",&num);
	
	strongNum(num);
	
	return 0;
}
