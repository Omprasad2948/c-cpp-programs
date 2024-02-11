#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class Book{
	private:
		int bid,bprice;
		char bname[50],bauthour[50],bpublication[50];
		
	public:
		void setdata(int id,char name[],char authour[],char publication[],int price){
			bid=id;
			strcpy(bname,name);
			strcpy(bauthour,authour);
			strcpy(bpublication,publication);
			bprice=price;
		}
	
		int getprice(){
			return bprice;
		}
		
		int getid(){
			return bid;
		}
		
		char *getname(){
			return bname;
		}
		
		char *getauthour(){
			return bauthour;
		}
		void showdata(){
			cout<<bid<<"\t"<<setw(12)<<bname<<setw(12)<<bauthour<<setw(12)<<bpublication<<"\t"<<bprice<<endl;
		}
	
};


int main(){
	
	int id,price,i,x=1,choice,count;
	char name[50],authour[50],publication[50],ch,ch1,ch2;
	Book b[10];
	do{
		cout<<"1:Add Book details."<<endl;
		cout<<"2:Display all Book Details."<<endl;
		cout<<"3:Display all book Details whose price range between 100 to 500."<<endl;
		cout<<"4:Search Book Details."<<endl;
		cout<<"5:Update Book Details."<<endl;
		cout<<"6:Delete Book Details."<<endl;
		cout<<"7:Count The Book Details."<<endl;
		cout<<"8:sort Books detail."<<endl;
		cout<<"9:Display Second Highest Book."<<endl;
		
		cout<<"Enter your choice...."<<endl;
		cin>>choice;
		switch(choice){
			
			case 1:
				for(i=x;i<x+1;i++){
					cout<<"Enter the book id,name,author,publication and price."<<endl;
					cin>>id>>name>>authour>>publication>>price;
					b[i].setdata(id,name,authour,publication,price);
				}
				x++;
				cout<<"Books Detail save Successfully....."<<endl;
				break;
				
			case 2:
				cout<<"The available books are."<<endl;
				for(int i=1;i<x;i++){
					b[i].showdata();
				}
				break;
				
			case 3:
				cout<<"The books details whose range between 100 to 500 :"<<endl;
				for(int i=1;i<x;i++){
					if(b[i].getprice()>=100  && b[i].getprice()<=500 )
					{
						b[i].showdata();
					}
				}
				break;
				
			case 4:
				
				do{
				cout<<"a:Book id"<<endl;
				cout<<"b:Book name"<<endl;
				cout<<"c:Book price"<<endl;
				cout<<"d:Book authour"<<endl;
				cout<<"e:For Exit"<<endl;
				cout<<"Enter your choice..."<<endl;
				cin>>ch1;
					switch(ch1){
						case 'a':
							int id1;
							cout<<"Enter the id to search of book"<<endl;
							cin>>id1;
							for(int i=1;i<x;i++){
								if(id1==b[i].getid()){
									b[i].showdata();
								}
							}
							break;
							
						case 'b':
							char name1[50];
							cout<<"Enter the book name to search the books"<<endl;
							cin>>name1;
							for(int i=1;i<x;i++){
								if(strcmp(name1,b[i].getname())){
									b[i].showdata();
								}
							}
							break;
							
						case 'c':
							int price1;
							cout<<"Enter the price to find the record."<<endl;
							cin>>price1;
							for(int i=1;i<x;i++){
								if(price1==b[i].getid()){
									b[i].showdata();
								}
							}
							break;
							
						case 'd':
							char authour1[50];
							cout<<"Enter the authour to get the records."<<endl;
							cin>>authour1;
							for(int i=1;i<x;i++){
								if(strcmp(authour1,b[i].getauthour())){
									b[i].showdata();
								}
							}
							break;
							
						default:
							cout<<"Exit........."<<endl;
			
					}
					cout<<"Do you want to continue y/n"<<endl;
					cin>>ch2;
				}while(ch2!='n');
				break;
				
			case 5:
				
				do{
				cout<<"a:Book id"<<endl;
				cout<<"b:Book name"<<endl;
				cout<<"c:Book price"<<endl;
				cout<<"d:Book authour"<<endl;
				cout<<"e:For Exit"<<endl;
				cout<<"Enter your choice..."<<endl;
				cin>>ch1;
					switch(ch1){
						case 'a':
							int id1;
							cout<<"Enter the id to update the book details"<<endl;
							cin>>id1;
							for(int i=1;i<x;i++){
								if(id1==b[i].getid()){
								cout<<"Enter the book id,name,author,publication and price."<<endl;
								cin>>id>>name>>authour>>publication>>price;
								b[i].setdata(id,name,authour,publication,price);
								}
							}
							break;
							
						case 'b':
							char name1[50];
							cout<<"Enter the book name to update the books"<<endl;
							cin>>name1;
							for(int i=1;i<x;i++){
								if(strcmp(name1,b[i].getname())){
									cout<<"Enter the book id,name,author,publication and price."<<endl;
									cin>>id>>name>>authour>>publication>>price;
									b[i].setdata(id,name,authour,publication,price);
								}
							}
							break;
							
						case 'c':
							int price1;
							cout<<"Enter the price to update the record."<<endl;
							cin>>price1;
							for(int i=1;i<x;i++){
								if(price1==b[i].getprice()){
									cout<<"Enter the book id,name,author,publication and price."<<endl;
									cin>>id>>name>>authour>>publication>>price;
									b[i].setdata(id,name,authour,publication,price);
								}
							}
							break;
							
						case 'd':
							char authour1[50];
							cout<<"Enter the authour to get the records."<<endl;
							cin>>authour1;
							for(int i=1;i<x;i++){
								if(strcmp(authour1,b[i].getauthour())){
									cout<<"Enter the book id,name,author,publication and price."<<endl;
									cin>>id>>name>>authour>>publication>>price;
									b[i].setdata(id,name,authour,publication,price);
								}
							}
							break;
							
						default:
							cout<<"Exit........."<<endl;
			
					}
					cout<<"Do you want to continue y/n"<<endl;
					cin>>ch2;
				}while(ch2!='n');
				break;
				
			case 6:
				
				do{
				cout<<"a:Book id"<<endl;
				cout<<"b:Book name"<<endl;
				cout<<"c:Book price"<<endl;
				cout<<"d:Book authour"<<endl;
				cout<<"e:For Exit"<<endl;
				cout<<"Enter your choice..."<<endl;
				cin>>ch1;
					switch(ch1){
						case 'a':
							int id1;
							cout<<"Enter the id to delete the book"<<endl;
							cin>>id1;
							for(int i=1;i<x;i++){
								if(id1==b[i].getid()){
									for(int j=i;j<x;j++){
										b[j]=b[j+1];
									}
									--x;
								}
							}
							cout<<"The record delete successfully....."<<endl;
							break;
							
						case 'b':
							char name1[50];
							cout<<"Enter the book name to delete the books"<<endl;
							cin>>name1;
							for(int i=1;i<x;i++){
								if(strcmp(name1,b[i].getname())){
									for(int j=i;j<x;j++){
										b[j]=b[j+1];
									}
									--x;
								}
							}
							cout<<"The record delete successfully....."<<endl;
							break;
							
						case 'c':
							int price1;
							cout<<"Enter the price to delete the record."<<endl;
							cin>>price1;
							for(int i=1;i<x;i++){
								if(price1==b[i].getid()){
									for(int j=i;j<x;j++){
										b[j]=b[j+1];
									}
									--x;
								}
							}
							cout<<"The record delete successfully....."<<endl;
							break;
							
						case 'd':
							char authour1[50];
							cout<<"Enter the authour to delete the records."<<endl;
							cin>>authour1;
							for(int i=1;i<x;i++){
								if(strcmp(authour1,b[i].getauthour())){
									for(int j=i;j<x;j++){
										b[j]=b[j+1];
									}
									--x;
								}
							}
							cout<<"The record delete successfully....."<<endl;
							break;
							
						default:
							cout<<"Exit........."<<endl;
			
					}
					cout<<"Do you want to continue y/n"<<endl;
					cin>>ch2;
				}while(ch2!='n');
				break;
				
			case 7:
				
				do{
				cout<<"a:Book id"<<endl;
				cout<<"b:Book name"<<endl;
				cout<<"c:Book price"<<endl;
				cout<<"d:Book authour"<<endl;
				cout<<"e:For Exit"<<endl;
				cout<<"Enter your choice..."<<endl;
				cin>>ch1;
					switch(ch1){
						case 'a':
							int id1;
							count=0;
							cout<<"Enter the id to get of book"<<endl;
							cin>>id1;
							for(int i=1;i<x;i++){
								if(id1==b[i].getid()){
									count++;
								}
							}
							cout<<"The available books are "<<count<<endl;
							break;
							
						case 'b':
							char name1[50];
							count=0;
							cout<<"Enter the book name to get the books"<<endl;
							cin>>name1;
							for(int i=1;i<x;i++){
								if(strcmp(name1,b[i].getname())){
									count++;
								}
							}
							cout<<"The available books are "<<count<<endl;
							break;
							
						case 'c':
							int price1;
							count=0;
							cout<<"Enter the price to get the record."<<endl;
							cin>>price1;
							for(int i=1;i<x;i++){
								if(price1==b[i].getid()){
									count++;
								}
							}
							cout<<"The available books are "<<count<<endl;
							break;
							
						case 'd':
							char authour1[50];
							count=0;
							cout<<"Enter the authour to get the records."<<endl;
							cin>>authour1;
							for(int i=1;i<x;i++){
								if(strcmp(authour1,b[i].getauthour())){
									count++;
								}
							}
							cout<<"The available books are "<<count<<endl;
							break;
							
						default:
							cout<<"Exit........."<<endl;
			
					}
					cout<<"Do you want to continue y/n"<<endl;
					cin>>ch2;
				}while(ch2!='n');
				break;
				
			case 8:
				
				do{
				cout<<"a:Ascending order byBook id"<<endl;
				cout<<"b:Descending order by Book price"<<endl;
				cout<<"c:For Exit"<<endl;
				cout<<"Enter your choice..."<<endl;
				cin>>ch1;
					switch(ch1){
						case 'a':
							for(int i=1;i<x;i++){
								for(int j=i+1;j<x;j++){
									if(b[i].getid()>b[j].getid()){
										Book temp=b[i];
										b[i]=b[j];
										b[j]=temp;
									}
								}
							}
							for(int i=1;i<x;i++){
								b[i].showdata();
							}
							break;
							
						case 'b':
							for(int i=1;i<x;i++)
							{
								for(int j=i+1;j<x;j++){
									if(b[i].getprice()<b[j].getprice()){
										Book temp=b[i];
										b[i]=b[j];
										b[j]=temp;	
									}
								}
							}
							for(int i=1;i<x;i++){
								b[i].showdata();
							}
							break;
														
						default:
							cout<<"Exit........."<<endl;
			
					}
					cout<<"Do you want to continue y/n"<<endl;
					cin>>ch2;
				}while(ch2!='n');
				break;
				
			case 9:
			for(int i=1;i<x;i++)
			{
			for(int j=i+1;j<x;j++){
				if(b[i].getprice()<b[j].getprice()){
				Book temp=b[i];
				b[i]=b[j];
				b[j]=temp;	
					}
				}
			}
			for(int i=1;i<x;i++){
					if(b[i].getprice()==b[i+1].getprice()){
						i=i+1;
					}
					else{
						b[++i].showdata();
						break;
					}
			}
				break;
				
			default:
				cout<<"Wrong Choice"<<endl;				
				break;
		}
		
		
		
		
		cout<<"Do you want to continue y/n"<<endl;
		cin>>ch;
	}while(ch!='n');
	
	
	return 0;
}

/*
1
thepower
meesho
japanese
99

2
ikigai
amazon
chinese
105

3
atomichabits
flipkart
indian
190

4
paulocoelho
bookstore
ingland
170

5
Endslove
snapdeal
corean
189





*/
