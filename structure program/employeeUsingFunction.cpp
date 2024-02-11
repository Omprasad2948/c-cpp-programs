#include<stdio.h>
#include<string.h>

struct employee{
	int eid;
	char ename[90];
	int eage;
	char edepart[90];
	char eadd[90];
}e[5];

void addEmployee(struct employee e[5],int x){
	
	for(int i=x;i<x+1;i++){
		printf("enter the id:");
		scanf("%d",&e[i].eid);
		
		printf("\nenter name:");
		scanf("%s",&e[i].ename);
		
		printf("\nenter address:");
		scanf("%s",&e[i].eadd);
		
		printf("\nenter depart:");
		scanf("%s",&e[i].edepart);
		
		printf("\nenter age:");
		scanf("%d",&e[i].eage);
	}
}

void displayEmplo(struct employee e[5],int x){
	
	printf("display employee:\n");
	for(int i=1;i<x;i++){
		
		printf("%d %s %d %s %s\n",e[i].eid,e[i].ename,e[i].eage,e[i].eadd,e[i].edepart);
	
	}
}

void displayByDepart(struct employee e[5],int x){
		char depart[10];
		printf("enter department:");
		scanf("%s",&depart);
		
		for(int i=1;i<x;i++){
			if(strcmp(e[i].edepart,depart)==0){
				printf("%d %s %d %s %s\n",e[i].eid,e[i].ename,e[i].eage,e[i].eadd,e[i].edepart);
			}
		}
}

void deleteEmplo(struct employee e[5],int x){
	int p;
	printf("enter id number for delete:");
	scanf("%d",&p);
	
	for(int i=1;i<x;i++){
		if(e[i].eid==p){
			for(int j=i;j<x;j++){
				e[j]=e[j+1];
			}
			x--;
		}
	
	}
    
	printf("remening employee:\n");
	for(int i=1;i<x;i++){
		printf("%d %s %d %s %s\n",e[i].eid,e[i].ename,e[i].eage,e[i].eadd,e[i].edepart);
	
	}
	
}

void sortEmplo(struct employee e[5],int x){
	
		for(int i=1;i<x;i++){
			for(int j=i+1;j<x;j++){
				if(e[j].eage>e[i].eage){
					struct employee temp = e[i];
					e[i] = e[j];
					e[j] = temp;
				}
			}
		}
	
	for( int i=1;i<x;i++){
		
		printf("display sort employee:\n");
		printf("%d %s %d %s %s\n",e[i].eid,e[i].ename,e[i].eage,e[i].eadd,e[i].edepart);
	
	}
}

int main(){
	int x = 1;
	char check;
	do{
	
	int i,choice;
	
	printf("1.add emplyoee\n");
	printf("2.Display employee\n");
	printf("3.display employee details by department\n");
	printf("4.Delete employee\n");
	printf("5.Sort employee based on age in desc order\n");
	printf("enter choice:");
	scanf("%d",&choice);
	
	
	switch(choice){
		case 1:{
			
			addEmployee(e, x);
			x = x + 1;
			break;
		}
		
		case 2:{
			displayEmplo(e, x);
			break;
		}	
		
		case 3:{
				displayByDepart(e,x);
			break;
		}
		
		case 4:{
			deleteEmplo(e,x);
			break;
		}
		
		case 5:{
			sortEmplo(e,x);
			break;
		}
		
		default:{
			printf("Invalid input\n");
			break;
		}
			
	}
	
	
	   
	
	return 0;
}
