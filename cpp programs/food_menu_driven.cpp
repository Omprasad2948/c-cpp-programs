#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class Food{
	
	private:
		int fid;
		char fname[50],fcategory[50];
		float fprice;
		
	public:
		void setdata(int id,char name[],char category[],float price){
			fid=id;
			strcpy(fname,name);
			strcpy(fcategory,category);
			fprice=price;
		}
		
		void showdata(){
		cout<<fid<<"\t"<<setw(10)<<fname<<"\t"<<setw(10)<<fcategory<<"\t"<<fprice;	
		}
		
		int getprice(){
			return fprice;
		}
		int getid(){
			return fid;
		}
		char *getname(){
		return fname;
		}
		
		
		
};

int main(){
	int id,choice,x=1,index,flag;
	char name[50],category[50],ch;
	float price;
	Food f[50];
	do{
		
		cout<<"1:Add food Details"<<endl;
		cout<<"2:Display food Details"<<endl;
		cout<<"3:Display food Details range between 500 to 1000"<<endl;
		cout<<"4:search food Details using Id"<<endl;
		cout<<"5:update food Details using name"<<endl;
		cout<<"6:Delete food Details using price"<<endl;
		cout<<"7:Purchase food item"<<endl;
		cout<<"8:Display Bill Details"<<endl;
		cout<<"9:Display food Details start first letter is 'P' and end with 'A'"<<endl;
		cout<<"Enter your choice....."<<endl;
		cin>>choice;
		
		switch(choice){
			
			
			case 1:
				if(x==50){
					cout<<"You don't have sufficient space to save the food details"<<endl;
				}
				else{
					for(int i=x;i<x+1;i++){
						cout<<"Enter the food id,name,category and price"<<endl;
						cin>>id>>name>>category>>price;
						f[i].setdata(id,name,category,price);
					}
					cout<<"Food detail save successfully"<<endl;
					x++;
				}
				break;
				
			case 2:
				if(x>0){
					cout<<"There is no food details saved...."<<endl;
				}
				else{
					for(int i=1;i<x;i++){
						f[i].showdata();
					}
				}
				break;
				
			case 3:
				for(int i=1;i<x;i++){
					if(f[i].getprice()>=500 && f[i].getprice()<=1000){
						f[i].showdata();
					}
				}
				break;
				
			case 4:
				int id1;
				flag=0,
				index=0;
				cout<<"Enter the id to search...."<<endl;
				cin>>id1;
				for(int i=0;i<x;i++){
					if(id1==f[i].getid()){
						index=i;
						flag=1;
						break;
					}
				}
				if(flag==0){
					cout<<"This food isn't exit in details"<<endl;
				}
				else{
					f[index].showdata();
				}
				break;
				
			case 5:
				if(x<0){
					cout<<"There is no food details to update the records"<<endl;
				}
				else{
					char name1[50];
					cout<<"Enter the name to update the records"<<endl;
					cin>>name1;
					for(int i=1;i<x;i++){
						if(strcmp(name1,f[i].getname())==0){
							cout<<"Enter the food id,name,category and price"<<endl;
							cin>>id>>name>>category>>price;
							f[i].setdata(id,name,category,price);
							cout<<"Food detais update successfully........."<<endl;
						}
					}
				}
				break;
				
			case 6:
					if(x<0){
					cout<<"There is no food details available to delete the records...."<<endl;
				}
				else{
					int price1;
					flag=0;
					cout<<"Enter the priceto delete the record"<<endl;
					cin>>price1;
					for(int i=0;i<x;i++){
						if(f[i].getprice()==price1){
							flag=1;
							for(int j=i;j<x;j++){
								f[j]=f[j+1];
							}
							--x;
						}
					}
					if(flag==0){
						cout<<"The food detail delete successfully...."<<endl;
					}
					else{
						cout<<"The food price is not matched with library book"<<endl;
					}
				}
				break;
				
			case 7:
				
				break;
				
			case 8:
				
				break;
				
			case 9:
				
				break;	
			
		}		
		
	    cout<<"Do you want to continue y/n"<<endl;
		cin>>ch;	
	}while(ch!='n');
	
	
	
	
	
	return 0;
}
/*
1
idali
veg
600

2
pulav
veg
700

3
chikken
non-veg
900

4
mutton
non-veg
800

5
paneer
veg
650

*/
