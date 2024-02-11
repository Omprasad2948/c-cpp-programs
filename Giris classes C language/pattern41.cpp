#include<stdio.h>
#include<conio.h>
int main(){
	
	for (int i=1;i<=9;i++){
		
		for(int j=1;j<=9;j++){
			if((i<=5 && (j<=i || j>=10-i) )||(i>=5 && (j<=10-i||j>=i )) ) {
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
