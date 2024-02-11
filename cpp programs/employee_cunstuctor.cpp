#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class employee{
	int eid,esal;
	char ename[50],eemail[50],eadd[50];
	
	public:
		void SetData(int id,char name[],char email[],char add[],int sal){
			eid=id;
			strcpy(ename,name);
			strcpy(eemail,email);
			strcpy(eadd,add);
		}
		
		void showdetails(){
			cout<<eid<<"\t"<<setw(10)<<ename<<"\t"<<setw(10)<<eemail<<"\t"<<eadd<<"\t"<<esal<<endl;
			
		}
		int getid(){
			return eid;
		}
};

int main(){
	int id, sal;
	char name[50],email[50],add[50];
    employee e[5];
    for(int i=0;i<5;i++){
    	cout<<"Enter the details of employee"<<endl;
    	cin>>id>>name>>email>>add>>sal;
        e[i].SetData(id,name,email,add,sal);
	}
	cout<<"The employee details after sorting ascending order";
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(e[i].getid()>e[j].getid()){
				employee temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		e[i].showdetails();
	}
	
	return 0;
}
