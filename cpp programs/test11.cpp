#include<iostream>

using namespace std;
class A{
	public:
		void show(){
			cout<<"I am the ember of class A"<<endl;
		}
};
class B:virtual public A{
	public:
	void display(){
		cout<<"I am the member of class B"<<endl;
	}
};

class C:virtual public A{
	public:
		void test(){
			cout<<"I am the member of class c"<<endl;
		}
};

class D:public B,public C{
	public:
		void printed(){
			cout<<"I am the member of class D";
		}
};

int main(){
	A a;
	a.show();
	B b;
	b.show();
	b.display();
	
	C c;
	c.show();
	c.test();
	
	D d;
	d.show();
	
	return 0;
}

//this is the Example using Hybrid Inheritances
