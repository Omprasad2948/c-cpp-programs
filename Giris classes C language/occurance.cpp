#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,rem,count=0,i,temp;
	printf("Enter the number \n");
	scanf("%d",&num);
	for(i=0;i<=9;i++){
		count=0;.
		temp=num;
		while(temp>0){
			rem=temp%10;
			if(rem==i){
				count++;
			}
			temp=temp/10;
		}
		
		if(count>0){
		printf("The %d number occur %d time\n",i,count);
	}
	}
	num=num/10;
	
//	i=0;
//	while(i<=9){
//		count=0;
//		temp=num;
//		while(temp>0){
//			rem=temp%10;
//			if(rem==i){
//				count++;
//			}
//			temp=temp/10;
//		}
//		
//		if(count>0){
//		printf("The %d number occur %d time\n",i,count);
//	}
//	i++;
//	}
//	num=num/10;
		
	
	
	return 0;
}
