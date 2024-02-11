#include<stdio.h>
#include<conio.h>
int main(){
	
	for(int i=1;i<=7;i++){
		//int num=i;
	int num=1;
		for(int j=1;j<=7;j++){
			
			
			if((j>=5-i && i<=4 && j<=3+i) || (i>=4 && j>=i-3 && j<=11-i)){
			   
			   printf("%d",num);
			   
				
				if(j<=4){
					num++;	
				}
				else{
					num--;
				}
			
		}
			else{
				printf(" ");
				//num++;
			}
		}
		printf("\n");
		
	} 
	
	
	return 0;
}
