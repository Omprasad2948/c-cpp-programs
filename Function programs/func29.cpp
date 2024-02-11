#include<stdio.h>

factors(int num){
	int i=2;
	printf("The factors are :\n");
	printf("1 ");
	while(num!=1){
		if(num%i==0){
			printf("%d ",i);
			num=num/i;
			i=2;
		}
		else{
			i++;
		}
	}
}
int main(){
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	factors(num);
}
