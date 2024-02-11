#include<stdio.h>

evenNum(){
	for(int i=1;i<=100;i++){
		if(i%2==0){
			printf("%d\t",i);
		}
	}
}

int main(){
	printf("The even numbers from 1 to 100 is:\n");
	evenNum();
}
