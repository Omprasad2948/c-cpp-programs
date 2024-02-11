#include<stdio.h>

oddNum(){
	for(int i=1;i<=100;i++){
		if(i%2!=0){
			printf("%d\t",i);
		}
	}
}

int main(){
	
	printf("The odd numbers from 1 to 100 is:\n");
	oddNum();
}
