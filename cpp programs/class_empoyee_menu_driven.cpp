#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class Employee{
	private:
		int eid,esalary;
		char ename[50],eemail[50],econtact[50];
		
		
	public:
		void set_data(int id,char name[],char email[],char contact[],int salary){
			eid=id;
			strcpy(ename,name);
			strcpy(eemail,email);
			strcpy(econtact,contact);
			esalary=salary;			
		}
		
		int getid(){
		    return eid;
    	}
	
    	char *getname(){
	    	return ename;
    	}
    	char *getemail(){
    		return eemail;
		}
    
		int getsalary(){
			return esalary;
		}
		void show(){
			cout<<eid<<"\t"<<setw(10)<<ename<<"\t"<<setw(10)<<eemail<<"\t"<<econtact<<"\t"<<esalary<<"\n";
		}
	
	
	
};


int main(){
	
	int id,salary,choice,x=1,max,index,min;
	char name[50],email[50],contact[50],ch;
	Employee e[50];
	
	do{
		cout<<"\n1:Add Employee"<<endl;
		cout<<"2:Display all Employee Details"<<endl;
		cout<<"3:Search Employee by id"<<endl;
		cout<<"4:Update Employee Details by name"<<endl;
		cout<<"5:Delete Employee Details by Id"<<endl;
		cout<<"6:Delete Employee Details by Email"<<endl;
		cout<<"7:Display the total number of Employee"<<endl;
		cout<<"8:Display the Employee details by highest salary"<<endl;
		cout<<"9:Display the Employee details by minimum salary"<<endl;
		//cout<<"10:Exit the code"<<endl;
		cout<<"Enter your choice......."<<endl;
		cin>>choice;
		switch(choice){
			
			case 1:
				for(int i=x;i<x+1;i++)
				{
				cout<<"Enter the id,name,email,contact and salary of Employee .\n";
					cin>>id>>name>>email>>contact>>salary;
					e[i].set_data(id,name,email,contact,salary);
					
				}
				cout<<"Data save successfully....\n";
				x+=1;
				break;
				
			case 2:
				for(int i=1;i<x;i++){
					e[i].show();
				}
				break;
				
			case 3:
				int id1;
				cout<<"Enter the id of employee"<<endl;
				cin>>id1;
				for(int i=1;i<x;i++){
					if(id1==e[i].getid()){
						e[i].show();
					}
				}
				break;
				
			case 4:
				char name1[50],name2[50];
				cout<<"Enter name to update the records :\n";
				cin>>name1;
				for(int i=1;i<x;i++){
					if(strcmp(name1,e[i].getname())==0){
						cout<<"Enter the id,name,email,contact and salary of Employee .\n";
						cin>>id>>name>>email>>contact>>salary;
						e[i].set_data(id,name,email,contact,salary);
					}
				}
				cout<<"\nRecord Updated Successfully...."<<endl;
				break;
				
			case 5:
				id1;
				cout<<"Enter the id to delete the records"<<endl;
				cin>>id1;
				for(int i=1;i<x;i++){
					if(id1==e[i].getid()){
						for(int j=i;j<x;j++){
							e[j]=e[j+1];
						}
						--x;
					}
					
				}
				cout<<"\nRecord Delete Successfully...."<<endl;
				break;
				
			case 6:
				char email1[50];
				cout<<"Enter the email to delete the record"<<endl;
				cin>>email1;
				for(int i=1;i<x;i++){
					if(strcmp(email1,e[i].getemail())==0)
					{
						for(int j=i;j<x;j++){
							e[j]=e[j+1];
						}
						--x;
					}
					
				}
				cout<<"\nRecord Delete Successfully...."<<endl;
				break;
				
			case 7:
				cout<<"The total number of emplyee is "<<(x-1);
				break;
				
			case 8:
				max=e[1].getsalary();
				index=0;
				for(int i=1;i<x;i++){
					if(e[i].getsalary()>max){
						max=e[i].getsalary();
						index=i;
					}
				}
				cout<<"The employee with maximum salary is :"<<endl;
				e[index].show();
				
				break;
				
			case 9:
				min=e[1].getsalary();
				index=0;
				for(int i=1;i<x;i++){
					if(e[i].getsalary()<min){
						max=e[i].getsalary();
						index=i;
					}
				}
				cout<<"The employee with maximum salary is :"<<endl;
				e[index].show();
				break;
				
			default:
				cout<<"Wrong Input"<<endl;
				break;			
		}
		cout<<"Do you want to continue y/n"<<endl;;
		cin>>ch;
		
		
	}while(ch!='n');
	
	cout<<"-------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxx-----------------------------------------------------";
	
	
	
	
	
	return 0;
}
/*
1
omprasad
omprasadd383@gmail.com
9284906663
50000

2
gopal
gopaljawale1@gmail.com
9545163884
55000

3
sunil
sunilchavan@gmail.com
9021505346
40000

4
gangaprasad
gangashirale@gmail.com
9325188594
30000

5
aniket
aniketdongare@gmail.com
7030168688
25000
  

*/
