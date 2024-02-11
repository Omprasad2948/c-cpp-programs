#include<stdio.h>


int main(){
	
	int num;
	printf("Enter the number to print the table :\n");
	scanf("%d",&num);
	
	void table(int);//declaration
	table(num);  //Function calling
	return 0;
}
//define the function
void table(int n){
	for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
