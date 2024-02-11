#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,sum=0,temp;
	printf("Enter the number:\n");
	scanf("%d",&num);
	temp=num;
	int j;
	for(j=1;j<=num;j++){

printf("Hii");
	for(int i=1;i<j;i++){
		
		if(j%i==0){
			sum=sum+i;
		}
	}
	if(sum==j){
		printf("%d\t",sum);
	}
//	else
//	{
//		printf("The number is not perfect");
//	}
}
	return 0;
}
