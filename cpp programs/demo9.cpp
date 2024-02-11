#include<iostream>
#include<string.h>
using namespace std;
class Person{
	protected:
		int id,age;
		char name[20];
		
	public:
		void setInfo(int id,char name[],int age){
			this->id=id;
			strcpy(this->name,name);
			this->age=age;
		}
		void showInfo(){
			cout<<id<<"\t"<<name<<"\t"<<age<<"\n";
		}
};
class Teacher:public Person{
	protected:
		int sal;
	public :
		
		void setSalary(int sal){
			this->sal=sal;
		}
		void showInfo(){
			cout<<id<<"\t"<<name<<"\t"<<age<<"\t"<<sal<<endl;
		}
		
};
class Student:public Person{
	protected:
		int marks;
	public:
		
		void setMarks(int a){
			marks=a;
		}
		void totalMarks(){
			cout<<"Marks is :"<<marks<<endl;
		}
		void showInfo(){
			cout<<id<<"\t"<<name<<"\t"<<age<<"\t"<<marks<<endl;
		}
};
int main(){
	
	cout<<"Enter the id name age and marks of stuents"<<endl;
	int id,age,sal,marks;
	char name[20];
	
	Student s[3];
	for(int i=0;i<3;i++){
		cin>>id>>name>>age>>marks;
		s[i].setInfo(id,name,age);
		s[i].setMarks(marks);
	}
	cout<<"The students info is"<<endl;
	for(int i=0;i<3;i++){
		s[i].showInfo();
	}
	cout<<"Enter the id name age and salary of teacher"<<endl;
	Teacher t[3];
	for(int i=0;i<3;i++){
		cin>>id>>name>>age>>sal;
		t[i].setInfo(id,name,age);
		t[i].setSalary();
	}
	
	cout<<"The teacher info is "<<endl;
	for(int i=0;i<3;i++){
		t[i].showInfo();
	}
	return 0;
	
}
