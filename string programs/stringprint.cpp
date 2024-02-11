#include<stdio.h>
#include<string.h>

int main(){
	
	int rno;
	char name[50],add[50];
	
	printf("Enter the roll number :\n");
	scanf("%d",&rno);
	_flushall();
	
	printf("Enter the name :\n");
	gets(name);
	_flushall();
	
	printf("Enter the address :\n");
	gets(add);
	_flushall();
	
	printf("\n\nRoll Number---->%d\n",rno);
	printf("Name------->%s\n",name);
	printf("The address---->%s",add);
	
	
	return 0;
}
