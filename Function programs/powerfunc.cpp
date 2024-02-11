#include<stdio.h>
#include<conio.h>
int main(){
	
	int base,index;
	printf("Enter the base:\n");
	scanf("%d",&base);
	
	printf("Enter the index :\n");
	scanf("%d",&index);
	
	void power(int ,int );
	power(base,index);
	
	
	return 0;
}

void power(int b,int ind){
	int p=1;
	for(int i=1;i<=ind;i++){
		p=p*b;
	}
	printf("Base %d index %d= power %d",b,ind,p );
}
