#include<stdio.h>
#include<conio.h>
int main(){
	
	// print all even number 1 to n
	int num,i;
	printf("Enter the nth number :\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		if(i%2==0){
			printf("%d  ",i);
		}
		
	}
	
	
	return 0;
}
