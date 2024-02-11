#include<stdio.h>
int sum=0,i=1;
int strongnum(int a){
	if(i<a){
		if(a%i==0){
			sum=sum+i;
		}
		i++;
		strongnum(a);
	}
	return sum;
}

int main(){
	
	int a,result;
	printf("Enter the number to check whether the number is strong or not :\n");
	scanf("%d",&a);
	
	result=strongnum(a);
	printf("Result =%d\n",result);
	if(result==a){
		printf("The number is strong number\n");
	}
	else{
		printf("The number is not strong number\n");
	}
	return 0;
}
