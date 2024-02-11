#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=4;i++){
		int num=1;
		for(int j=1;j<=7;j++){
			if(j>=i && i<=4 && j<4+i){
				printf("%d ",num);
				num++;
			}
			else{
				printf(" ");
			}
			
			}
		
		printf("\n");
	}
	
	return 0;
}
