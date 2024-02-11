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
		virtual int getResult()=0;
};

class Add:public value{
	public:
		int getResult(){
			return a+b;
		}
};
class Sub:public value{
	public:
		int getResult(){
			return a-b;
		}
};
class Mul:public value{
	public:
		int getResult(){
			return a*b;
		}
};

int main(){
	
	Add a;
	a.setValue(10,20);
	int result=a.getResult();
	cout<<"The addition is "<<result<<endl;
	
	Sub s;
	s.setValue(10,20);
	result=s.getResult();
	cout<<"The addition is "<<result<<endl;
	
	Mul m;
	m.setValue(10,20);
	result=m.getResult();
	cout<<"The addition is "<<result<<endl;
	
	
	return 0;
}

//this is the Example using Multiple Inheritances
