#include<iostream>

using namespace std;
class A{
	public:
		void show(){
			cout<<"I am A"<<endl;
		}
};
class B:public A{
	public:
		void show(){
			cout<<"I am B"<<endl;
		}
};

int main(){
	B a;
	a.show();
	
	return 0;
}

//this is the Example using Multiple Inheritances
