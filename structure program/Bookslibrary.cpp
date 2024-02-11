#include<stdio.h>
#include<string.h>

struct books
{
	int bid,bprice;
	char bname[50],bauthor[50];
}   b[50];

void addbooks(struct books b[50],int x){
	for(int i=x;i<=x;i++){
		printf("Enter the id of Books:\n");
    	scanf("%d",&b[i].bid);
    	_flushall();
    	printf("Enter the name of Books:\n");
    	gets(b[i].bname);
    	printf("Enter the Authour of Books:\n");
    	gets(b[i].bauthor);
    	printf("Enter the price of Book:\n");
    	scanf("%d",&b[i].bprice);
    	_flushall();
    	printf("Books Details save succesfully.......\n\n\n");
	}
}

void DisplayBooks(struct books b[50],int x){
	for(int i=1;i<x;i++){
		printf("%d\t%s\t%s\t%d\n",b[i].bid,b[i].bname,b[i].bauthor,b[i].bprice);
	}
}
void displaybooks100to500(struct books b[50],int x){
	for(int i=1;i<x;i++){
		if(b[i].bprice>=100 && b[i].bprice<=500){
			printf("%d\t%s\t%s\t%d\n",b[i].bid,b[i].bname,b[i].bauthor,b[i].bprice);
		}
	}
}

void searchBooks(struct books b[50],int x){
	char choice;
	printf("  a:Search By Id:\n");
	printf("  b:Search by name:\n");
	printf("  c:Search by price:\n");
	printf("  d:Search by Authour:\n");
	_flushall();
	scanf("%c",&choice);
	switch(choice){
		case 'a':
			printf("Enter the id :\n");
			int id;
			scanf("%d",&id);
			for(int i=1;i<x;i++){
				if(id==b[i].bid){
					printf("%d\t%s\t%s\t%d\n",b[i].bid,b[i].bname,b[i].bauthor,b[i].bprice);
				}
			}
		break;
		
		case 'b':
			printf("Enter the name to search:\n");
			char name[50];
			_flushall();
			gets(name);
			for(int i=1;i<x;i++){
				if(strcmp(name,b[i].bname)==0){
					printf("%d\t%s\t%s\t%d\n",b[i].bid,b[i].bname,b[i].bauthor,b[i].bprice);
				}
			}
		break;
		
		case 'c':
			printf("Enter the price:\n");
			int price;
			scanf("%d",&price);
			for(int i=1;i<x;i++){
				if(price==b[i].bprice){
					printf("%d\t%s\t%s\t%d\n",b[i].bid,b[i].bname,b[i].bauthor,b[i].bprice);
				}
			}
		break;
		
		case 'd':
			printf("Enter the Authour to search:\n");
			char authour[50];
			_flushall();
			gets(authour);
			for(int i=1;i<x;i++){
				if(strcmp(authour,b[i].bauthor)==0){
					printf("%d\t%s\t%s\t%d\n",b[i].bid,b[i].bname,b[i].bauthor,b[i].bprice);
				}
			}
		break;
			
	}
}

void updateBooks(struct books b[50],int x){
	char choice;
	printf("  a:Update the Id:\n");
	printf("  b:Update name:\n");
	printf("  c:Update price:\n");
	printf("  d:Update Authour:\n");
	_flushall();
	scanf("%c",&choice);
	switch(choice){
		case 'a':
			printf("Enter the old Id :\n");
			int id,nId,nprice;
			char nname[50],nauthour[50];
			scanf("%d",&id);
			for(int i=1;i<x;i++){
				if(id==b[i].bid){
				printf("Enter the new Id:\n");
					scanf("%d",&nId);
					_flushall();
					b[i].bid=nId;
					
					printf("Enter the new name:\n");
					gets(nname);
					_flushall();
					strcpy(b[i].bname,nname);
					
					printf("Enter the new price:\n");
					scanf("%d",&nprice);
					_flushall();
					b[i].bprice=nprice;
					
					printf("Enter the new authour :\n");
					gets(nauthour);
					_flushall();
					strcpy(b[i].bauthor,nauthour);
				    
				}
			}
		break;
		
		case 'b':
			printf("Enter the old name:\n");
			char name[50];
			nname[50];
			_flushall();
			gets(name);
			for(int i=1;i<x;i++){
				if(strcmp(name,b[i].bname)==0){
					printf("Enter the new Id:\n");
					scanf("%d",&nId);
					_flushall();
					b[i].bid=nId;
					
					printf("Enter the new name:\n");
					gets(nname);
					_flushall();
					strcpy(b[i].bname,nname);
					
					printf("Enter the new price:\n");
					scanf("%d",&nprice);
					_flushall();
					b[i].bprice=nprice;
					
					printf("Enter the new authour :\n");
					gets(nauthour);
					_flushall();
					strcpy(b[i].bauthor,nauthour);
				}
			}
		break;
		
		case 'c':
			printf("Enter the old price:\n");
			int price;
			nprice;
			scanf("%d",&price);
			for(int i=1;i<x;i++){
				if(price==b[i].bprice){
					printf("Enter the new Id:\n");
					scanf("%d",&nId);
					_flushall();
					b[i].bid=nId;
					
					printf("Enter the new name:\n");
					gets(nname);
					_flushall();
					strcpy(b[i].bname,nname);
					
					printf("Enter the new price:\n");
					scanf("%d",&nprice);
					_flushall();
					b[i].bprice=nprice;
					
					printf("Enter the new authour :\n");
					gets(nauthour);
					_flushall();
					strcpy(b[i].bauthor,nauthour);
				}
			}
		break;
		
		case 'd':
			printf("Enter the old Authour:\n");
			char authour[50];
			nauthour[50];
			_flushall();
			gets(authour);
			for(int i=1;i<x;i++){
				if(strcmp(authour,b[i].bauthor)==0){
					printf("Enter the new Id:\n");
					scanf("%d",&nId);
					_flushall();
					b[i].bid=nId;
					
					printf("Enter the new name:\n");
					gets(nname);
					_flushall();
					strcpy(b[i].bname,nname);
					
					printf("Enter the new price:\n");
					scanf("%d",&nprice);
					_flushall();
					b[i].bprice=nprice;
					
					printf("Enter the new authour :\n");
					gets(nauthour);
					_flushall();
					strcpy(b[i].bauthor,nauthour);
				}
			}
		break;
			
	}
}

void deleteBooksdtl(struct books b[50],int x){
	
	char choice;
	printf("  a:Delete using Id:\n");
	printf("  b:Delete using name:\n");
	printf("  c:Delete using price:\n");
	printf("  d:Delete using Authour:\n");
	_flushall();
	scanf("%c",&choice);
	switch(choice){
		case 'a':
			printf("Enter the Id to delete the datails :\n");
			int id;
			scanf("%d",&id);
			for(int i=1;i<x;i++){
				if(id==b[i].bid){
				 for(int j=i;j<x;j++){
				 	b[j]=b[j+1];
				 }
				 --x;
				}
			}
		break;
		
		case 'b':
			printf("Enter the name to delete the details:\n");
			char name[50];
			_flushall();
			gets(name);
			for(int i=1;i<x;i++){
				if(strcmp(name,b[i].bname)==0){
					for(int j=i;j<x;j++){
				 	b[j]=b[j+1];
				 }
				 --x;				

				}
			}
		break;
		
		case 'c':
			printf("Enter the price to delete the details:\n");
			int price;
			scanf("%d",&price);
			
			for(int i=1;i<x;i++){
				if(price==b[i].bprice){
			    for(int j=i;j<x;j++){
				 	b[j]=b[j+1];
				 }
				 --x;
				}
			}
		break;
		
		case 'd':
			printf("Enter the Authour to delete the details:\n");
			char authour[50];
			_flushall();
			gets(authour);
			for(int i=1;i<x;i++){
				if(strcmp(authour,b[i].bauthor)==0){
					for(int j=i;j<x;j++){
				 	b[j]=b[j+1];
				 }
				 --x;
				}
				
			}
		break;
			
	}
}
void cuntbooksdetails(struct books b[50],int x){
	--x;
	printf("There number of available books are =%d ",x);
}

void sortBooks(struct books b[50],int x){
	for(int i=1;i<x;i++){
		for(int j=i+1;j<x;j++){
			if(b[i].bid>b[j].bid){
				struct books temp=b[i];
				b[i]=b[j];
				b[j]=temp;
				
//				char q[50];
//				strcpy(q,b[i].bname);
//				strcpy(b[i].bname,b[j].bname);
//				strcpy(b[j].bname,q);
//				
//				
//				char r[50];
//				strcpy(r,b[i].bauthor);
//				strcpy(b[i].bauthor,b[j].bauthor);
//				strcpy(b[j].bauthor,r);
//				  				
//				int p=b[i].bprice;
//				b[i].bprice=b[j].bprice;
//				b[j].bprice=p;
			}
		}
	}
	for(int i=1;i<x;i++){
		printf("%d\t%s\t%s\t%d\n",b[i].bid,b[i].bname,b[i].bauthor,b[i].bprice);
	}
}
int main(){
	
	int choice,x=1;
	char check;
	do{
		printf("1:Add Book details :\n");	
		printf("2:Display Book details:\n");	
		printf("3:Display Book details whose price range is between 100 to 500:\n");	
		printf("4:Search Books details:\n");	
		printf("5:Update Books details:\n");	
		printf("6:Delete Books details:\n");	
		printf("7:Count Books details:\n");	
		printf("8:Sort Books details in ascending order by id:\n");	

		scanf("%d",&choice);
		switch(choice){
			case 1:
				addbooks(b,x);
				x++;
				break;
			
			case 2:
				DisplayBooks(b,x);
				break;
				
			case 3:
				displaybooks100to500(b,x);
				break;
				
			case 4:
				searchBooks(b,x);
				break;
				
			case 5:
				updateBooks(b,x);
				break;
				
			case 6:
				deleteBooksdtl(b,x);
				break;
				
			case 7:
				cuntbooksdetails(b,x);
				break;
				
			case 8:
				sortBooks(b,x);
				break;
				
			default:
				
				break;
			
			
			
		}	
	printf("\nyou want to continue y/n: ");
	scanf(" %c",&check);
	
	}while(check=='y');
	printf("\t\t\t\t\tThank you for the visiting .....\t\t\t");
	
	
	return 0;
}
