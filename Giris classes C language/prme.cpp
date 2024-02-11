#include<stdio.h>
#include<conio.h>
int main(){
	int num,i,count;
	
	for(num=1;num<=100;num++){
		count=0;
		for(i=2;i<num;i++){
			if(num%i==0){
				count++;
				break;
			}
		}
		if(count==0 && num!=1){
			printf("%d ",num);
		}
	}
	
	return 0;
}
