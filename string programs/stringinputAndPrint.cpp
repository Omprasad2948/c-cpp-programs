#include<stdio.h>

int main(){
	
	char ch[20];
	int i=0;
	printf("Enter your name : ");
	scanf("%s",&ch);
	
	printf("\nMy name is %s\n",ch);
	for(i=0;ch[i]!='\0';i++){
		printf("%c\n",ch[i]);
	}
	return 0;
}
