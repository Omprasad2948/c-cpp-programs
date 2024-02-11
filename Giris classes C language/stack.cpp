#include<stdio.h>
#include<conio.h>
int main(){
	int choice,stack[5],top=-1,value;
	int len=sizeof(stack)/sizeof(stack[0]);
	
	do{
	printf("\n1:push\n");
	printf("\n2:pop\n");
	printf("\n3:Display:\n");
	printf("\nEnter your choice :\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		if(top==(len-1)){
			printf("Stack is overflow");
		}
		else{
			top=top+1;
			printf("Enter the value in stack :\n");
			scanf("%d",&value);
			stack[top]=value;
		}
		break;
		
		case 2:
		   if(top==-1){
		   	printf("The stack is underflow..");
		   }
		   else{
		   	value=stack[top];
		   	top=top-1;
		   	printf("Deleted value in stack is %d",value);
		   }
		break;
		
		case 3:
		if(top==-1){
		   	printf("The stack is underflow..");
		   }
		   else{
		   	for(int i=top;i>=0;i--){
		   		printf("%d\t",stack[i]);
			   }
		   }
		   break;
		 default:
		   printf("Wrong choice");
		   break;	
	}
	
	
	
	}while(choice!=4);
	return 0;
}
