#include<iostream>

using namespace std;

class value{
	protected:
		int a,b;
	public:
		void setValue(int a,int b){
			this->a=a;
			this->b=b;
		}
};

class Mul:public value{
	public:
		int getMul(){
			return a*b;
		}
};

class Add:public value{
	public:
		int getadd(){
			return a+b;
		}
};

class Div:public value{
	public:
		int getdiv(){
			return a/b;
		}
};
int main(){
	
	Mul m;
	m.setValue(10,20);
	int result= m.getMul();
	cout<<"The multiplication is "<<result<<endl;
	
	Add a;
	a.setValue(10,20);
	result=a.getadd();
	cout<<"The addition is "<<result<<endl;
	
	Div d;
	d.setValue(20,10);
	result=d.getdiv();
	cout<<"The Division is "<<result<<endl;
	return 0;
}
