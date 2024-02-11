#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct food{
	int fid,fprice;
	char fname[50],fcategory[50];
};
int main(){
	
	printf("Welcome o the Food Restaurent.:\n");
	int size,choice;

	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	struct food f[size];
	for(int i=0;i<size;i++){
		printf("Enter the food id,food name,food category,food price:\n");
		scanf("%d %s %s %d",&f[i].fid,&f[i].fname,&f[i].fcategory,&f[i].fprice);
	}
	
	do{
		printf("1:Display the food.\n");
		printf("2:Display food price range between 100 to 500\n");
		printf("3:Search food details using id\n");
		printf("4:Search food details using name\n");
		printf("5:Search food details using category\n");
		printf("6:Search food details using price\n");
		printf("7:Update the id of food\n");
		printf("8:Update the name of food\n");
		printf("9:Update the cateegory of food\n");
		printf("10:Update the price of food\n\n\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("The food is :\n");
	            for(int i=0;i<size;i++){
	           	printf("%d\t%s\t%s\t%d\n",f[i].fid,f[i].fname,f[i].fcategory,f[i].fprice);
	            }
	            break;
	        case 2:
	        	for(int i=0;i<size;i++){
	        		if(f[i].fprice>=100 && f[i].fprice<=500){
	        		printf("%d\t%s\t%s\t%d\n",f[i].fid,f[i].fname,f[i].fcategory,f[i].fprice);	
					}
				}
	        	break;
	        case 3:
	        	int id;
	        	printf("Enter the id:\n");
	        	scanf("%d",&id);
	        	for(int i=0;i<size;i++){
	        		if(id==f[i].fid){
	        		printf("%d\t%s\t%s\t%d\n",f[i].fid,f[i].fname,f[i].fcategory,f[i].fprice);	
					}
				}
				break;
			
			case 4:
				char name[50];
				printf("Enter the name to search the food :\n");
				_flushall();
				gets(name);
				for(int i=0;i<size;i++){
					int value=strcmp(name,f[i].fname);
					if(value==0){
					printf("%d\t%s\t%s\t%d\n",f[i].fid,f[i].fname,f[i].fcategory,f[i].fprice);		
					}
				}
				break;
			case 5:
				char category[50];
				printf("Enter the category to search the food :\n");
				_flushall();
				gets(category);
				for(int i=0;i<size;i++){
					int value=strcmp(category,f[i].fcategory);
					if(value==0){
					printf("%d\t%s\t%s\t%d\n",f[i].fid,f[i].fname,f[i].fcategory,f[i].fprice);		
					}
				}
				break;
				
			case 6:
				int price;
				printf("Enter the price to search the food:\n");
				scanf("%d",&price);
				for(int i=0;i<size;i++){
					if(price==f[i].fprice){
					printf("%d\t%s\t%s\t%d\n",f[i].fid,f[i].fname,f[i].fcategory,f[i].fprice);			
					}
				}
				break;
			case 7:
			id;
			printf("Enter the old id to change:\n");
			scanf("%d",&id);
			_flushall();
			for(int i=0;i<size;i++){
				if(f[i].fid==id){
					int b;
					printf("Enter the new id :\n");
					scanf("%d",&b);
					f[i].fid=b;
					break;
				}
			}
			break;
			case 8:
				name[50];
				printf("Enter the name do you want the change.:\n");
				scanf("%s",&name);
				_flushall();
				int value;
				for(int i=0;i<size;i++){
					value=strcmp(name,f[i].fname);
					if(value==0){
						printf("Enter the new name to change:\n");
						char n[50];
						scanf("%s",&n);
						_flushall();
						strcpy(f[i].fname,n);
						break;
					}
				}
				break;
			case 9:
				category;
				printf("Enter the old category:\n");
				scanf("%s",&category);
				_flushall();
				value;
				for(int i=0;i<size;i++){
					value=strcmp(category,f[i].fcategory);
					if(value==0){
						printf("Enter the new category to change:\n");
						char n[50];
						scanf("%s",&n);
						_flushall();
						strcpy(f[i].fcategory,n);
						break;
					}
				}
				break;
			case 10:
				price;
				printf("Enter the old price:\n");
				scanf("%d",&price);
				for(int i=0;i<size;i++){
					if(price==f[i].fprice){
						printf("Enter the new price to update:\n");
						int p;
						scanf("%d",&p);
						f[i].fprice=p;
						break;
					}
				}
				break;
			default:
				printf("Exit!");
				break;
		}
	
	}while(choice!=11);
	
	return 0;
}




