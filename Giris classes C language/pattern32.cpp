#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=0;i<=4;i++){
		int n=1;
		for(int j=1;j<=9;j++){
			if(j<=8-i && j>=5-i){
				printf("%d",n);
				n++;
			}
			else{
				printf(" ");
			}
			
			}
		
		printf("\n");
	}
	
	return 0;
}
