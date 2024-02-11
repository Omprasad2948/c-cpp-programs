#include<stdio.h>
int result=0;
int getval(int x){
	
	if(x!=0){
		result=result+(x>>2)+10;
		getval(--x);
	}
	else{
		return result;
	}
}

int main(){
	int val=getval(3);
	printf("%d",val);
	return 0;
}
