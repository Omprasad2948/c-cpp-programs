#include<stdio.h>
#include<conio.h>
int main(){
	
	for (int i=1;i<=9;i++){
		
		for(int j=1;j<=9;j++){
			if((i<=5 && j<=6-i || j>=i+4) || (i>=6 && j<=i-4 || j>=14-i)) {
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
