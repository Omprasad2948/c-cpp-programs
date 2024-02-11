#include<iostream>
using namespace std;
class A{
	public:
		A(int x){
			cout<<"I am cunstroctor of parent class"<<endl;
		}
};

class B:public A{
	public:
		B():A(100){
			cout<<"I am the cunstructor of child class"<<endl;
		}
};
int main(){
	B b1;
	
	
	return 0;
}

//Cunstroctor  Inheritances
//when there is default cunstuctor in the parent class and we inherit the parent class in the child class then the p
//parent class cunstructor getting called and then child class cunstructor called
