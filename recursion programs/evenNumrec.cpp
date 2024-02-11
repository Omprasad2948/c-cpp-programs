#include<stdio.h>
int i=1;
void evenNum(){
	if(i<=100){
		if(i%2==0){
			printf("%d\t",i);
		}
		i++;
		evenNum();
	}
}
int main(){
	
	evenNum();
}
