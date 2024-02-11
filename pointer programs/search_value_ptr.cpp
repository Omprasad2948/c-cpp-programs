#include<stdio.h>
#include<conio.h>
int main(){
	
	int size,*ptr,i,j,count=0;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	int a[size];
	ptr=a;
	printf("\nEnter the element in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nThe element in the array :\n");
	for(i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
    int svalue,flag=0;
    printf("\nEnter the search value :\n");
    scanf("%d",&svalue);
    for(i=0;i<size;i++){
    	if(*(ptr+i)==svalue){
    		flag=1;
    		break;
		}
	}
	if(flag==1){
		printf("The value is available ");
	}
    else{
    	printf("The value is not available");
	}
}
