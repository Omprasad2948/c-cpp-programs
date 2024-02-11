#include<stdio.h>

arrayOperation(int a[],int size){
		int num;
		int flag=0;
		
	do {
	
		printf("\n\nEnter the number to perform operation :\n");
		printf("1-Print array\n");
		printf("2-sort ascending\n");
		printf("3-sort Descending\n");
		printf("4-Search value\n");
		printf("5-add specific index\n");
		printf("6-Delete specific index value\n");
		printf("7-calculate frequency of each number\n");
		printf("8-For Exit\n");
		
		scanf("%d",&num);
		
		switch(num){
			case 1:
				printf("The array elements are :\n");
				for(int i=0;i<size;i++){
					printf("%d\t",a[i]);
				}
				break;
				
			case 2:
				printf("\nThe array after ascending order :\n");
				for(int i=0;i<size;i++){
					for(int j=i+1;j<size;j++){
						if(a[i]>a[j]){
							int temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				for(int i=0;i<size;i++){
					printf("%d\t",a[i]);
				}
				break;
				
			case 3:
			   	printf("\nThe array after Descending order :\n");
				for(int i=0;i<size;i++){
					for(int j=i+1;j<size;j++){
						if(a[i]<a[j]){
							int temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				for(int i=0;i<size;i++){
					printf("%d\t",a[i]);
				}
				break;	
				
			case 4:
				int svalue;//flag=0;
				printf("Enter the value to search :\n");
				scanf("%d",&svalue);
				for(int i=0;i<size;i++){
					if(a[i]==svalue){
						flag=1;
						break;
					}
				}
				if(flag==1){
					printf("The value is present.\n");
					flag=0;
				}
				else{
					printf("The value is not present.\n");
				}
				
				
				break;
			
			
			case 5:
				
				int index, value;
				printf("Enter the index.\n");
				scanf("%d",&index); // 2
				
				printf("Enter the value.\n");
				scanf("%d",&value); // 100
				
				for(int i=size;i>index;i--)  // i=5  5>2
				{
					
					
					a[i]=a[i-1];
				}
				
				
				for(int i=0;i<=size;i++){
					if(i==index){
						a[i]=value;
					}
					printf("%d\t",a[i]);
				}
				
				
				break;
				
		case 6:
			printf("Enter the index :\n");
			index;
			scanf("%d",&index);
			printf("The array after delete the index value:\n");
			for(int i=0;i<size;i++){
					if(i==index){
						i=i+1;
					}
					printf("%d\t",a[i]);
				}
			  default:
			  	
			  	break;
		}
		
		
	}while(num!=8);
	
}

int main(){
	
	
	int size,i;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter the elements in the array :\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
//	void arrayOperaton(int ,int); //array declaration
	arrayOperation(a,size); // Array calling
	
	
	return 0;
}
