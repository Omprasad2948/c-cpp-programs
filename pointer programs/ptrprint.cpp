//insertion in array

#include<stdio.h>

int main(){
	
	int a[5]={2 , 5 ,8 ,9 ,11};
	
	for(int i=0;i<5;i++){
		int count=0;
		for(int j=1;j<=a[i];j++){
			if(a[i]%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\t",a[i]);
		}
	}
	
	return 0;
}
