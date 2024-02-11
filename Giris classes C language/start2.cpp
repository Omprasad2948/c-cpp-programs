#include<stdio.h>
#include<conio.h>
int main(){
	int n=1,count=5;
	while(count<=9){
	for(int i=0;i<=4;i++)
	{
	  
			for(int j=1;j<=5;j++)
			{
		if((i+j)==count){
			printf("%d",n);
			n++;
			break;
						
		}
//		else if((i+j)>count){
////			printf("%d",n);
////			n++;
//			break;
//						
//		}
		else 
		{
			printf(" ");
			//break;
			
			}	
			}
    	
		
		printf("\n");
	}
	count++;
}
		
	
	
	
	return 0;
}
