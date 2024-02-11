#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,rem;
	printf("Enter the number :\n");
	scanf("%d",&num);
	int temp=num;
	for(int i=0;i<=9;i++){
		
		int count=0;
		while(num!=0){
			rem=num%10;
			if(rem==i){
				count++;
			}
			num=num/10;
		}
		if(count>0)
			printf("\n%d = %d",i,count);
		num=temp;
	}
	
	
	
	return 0;
}
