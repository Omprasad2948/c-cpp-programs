#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,sum,temp;
	printf("Enter the number:\n");
	scanf("%d",&temp);
	int j;
	for(j=0;j<=temp;j++){
	sum=0;
	num=j;
	int i;
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==j){
		printf("%d\t",j);
	}
	
}

//	else
//	{
//		printf("The number is not perfect");
//	}
	return 0;
}
