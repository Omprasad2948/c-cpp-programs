#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=5;i++){
		int num=1;
		char ch='A';
		for(int j=1;j<=5;j++){
			if(j<=5-i){
				printf("%d  ",num);
				num++;
			}
			else{
				printf("%c  ",ch);
				ch++;
			}
		}
		printf("\n");
	}
	
	return 0;
}
