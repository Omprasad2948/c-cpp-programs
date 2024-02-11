#include<stdio.h>
#include<conio.h>
int main(){
	
	for (int i=1;i<=11;i++){
		
		for(int j=1;j<=6;j++){
			if((i<=5 && j==6-i  ) || (i>=6 && j==i-4 )||i==5) {
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
