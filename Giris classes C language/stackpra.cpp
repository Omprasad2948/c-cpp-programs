#include<stdio.h>
#include<conio.h>
int main(){
	
	int stack[5],len,value,i,top=-1,choice;
	len=sizeof(stack)/sizeof(stack[0]);
	
	do{
		
		printf("1:Push\n");
		printf("2:Pop\n");
		printf("3:Display\n");
		printf("Enter your Choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(top==(len-1)){
					printf("\nThe stack is overflow.\n");
				}
				else
				{
					top=top+1;
					printf("Enter the value in stack :");
					scanf("%d",&value);
					stack[top]=value;
				}
				break;
				
			case 2:
				if(top==-1){
					printf("The stack is underflow,\n");
				}
				else {
					stack[top]=value;
					top=top-1;
					printf("The deleted value is %d\n",value);
				}
				break;
				
			case 3:
				if(top==-1){
					printf("The stack is underflow,\n");
				}
				else{
					for(i=top;i>=0;i--){
						printf("%d\n",stack[i]);
					}
				}
				break;
				
			default:
				printf("Wrong Choice \n");
				break;
		}
		
		
	}while(choice!=4);
	
	
	
	return 0;
}
