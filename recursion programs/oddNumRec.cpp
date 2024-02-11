#include<stdio.h>
int i=1;
void oddNum(){
	if(i<=100){
		if(i%2!=0){
			printf("%d\t",i);
		}
		i++;
		oddNum();
	}
}
int main(){
	
	oddNum();
}
