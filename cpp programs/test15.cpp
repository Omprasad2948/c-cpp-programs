#include<iostream>

using namespace std;
class vehicle{
	public:
		virtual void engine()=0;
};
class Bike{
	public:
		void engine(){
			cout<<"The bike engine has 150cc"<<endl;
		}
};
class Car{
	public:
		void engine()
		{
			cout<<"The Car engine has 350cc"<<endl;
		}
};
int main(){
	
	Bike b;b.engine();
	Car c;c.engine();
	
	return 0;
}

//this is the Example Abstraction
