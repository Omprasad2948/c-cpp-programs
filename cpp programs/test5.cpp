#include<iostream>
#include<string.h>

using namespace std;
class employee{
	int id,salary,whr,overtime;
	char name[20];
	
	public:
		void setdetails(int id,char name[],int salary){
			this->id=id;
			strcpy(this->name,name);
			this->salary=salary;
			overtime=0;
		}
		void displaydetails(){
			cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
		}
		void overtimeclaculator(int hr){
			overtime=hr;
		}
		int returnid(){
			return id;
		}
};


int main(){
	
	
	employee e[5];
	int id,salary,choice,id1,overtime;
	char name[20];
	for(int i=0;i<5;i++){
		cout<<"Enter the details of employee such as id name and salary"<<endl;
		cin>>id>>name>>salary;
		e[i].setdetails(id,name,salary);
	}
 cout<<"Enter your choice"<<endl;
 cout<<"1:Display employee records"<<endl;
 cout<<"2:Calculate employee overtime"<<endl;
 cin>>choice;
	switch(choice){
		case 1:
			cout<<"The employee details is"<<endl;
			for(int i=0;i<5;i++){
				e[i].displaydetails();
			}
			break;
			
		case 2:
			cout<<"Enter the id to calculate the overtime of employee"<<endl;
			
			break;
			
		default:
			cout<<"Wrong choice"<<endl;
			
	}
	return 0;
}
