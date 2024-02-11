#include<stdio.h>
#include<conio.h>
int main(){
	// find the powewr of given number  using fower loop
	int pow=1,number,i ,count=0,j;
	printf("Enter the number to find its power:\n");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		count=0;
		for(j=1;j<=number;j++){
			pow=pow*i;
			if(pow==number){
			printf("The number is %d and power is %d",i,count);
		}
			count++;
		}
		
	}
	return 0;
	}

