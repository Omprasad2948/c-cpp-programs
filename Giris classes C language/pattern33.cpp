#include<stdio.h>
#include<conio.h>

int main(){
	
	for(int i=1;i<=5;i++){
		int num=i;
		int k=4;
		for(int j=1;j<=5;j++){
			if(j<=5-i){
				printf(" \t");
			}else{
				printf("%d\t",num);
				num=num+k;
				k--;
			}
		}
		printf("\n");
	}
	
	return 0;
}
