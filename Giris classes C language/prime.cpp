#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,i,count;
	num=1;
	while(num<=100){
		count=0;
		for(i=2;i<num;i++){
		if(num%i==0){
			count++;
			break;
		}
	}
		if(count==0 && num!=1){
		printf("%d  ",num);
	}
	num++;
	}


	
	
	
	return 0;
}
