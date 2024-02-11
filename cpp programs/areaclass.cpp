#include<iostream>

using namespace std;

class Find_area{
	public:
	 Find_area(){
		cout<<"\nHello world";
	}
	private:
		int length,breadth;
	public:
		void set_value(int x,int y){
			length=x;
			breadth=y;
		}
		void area(){
			cout<<"\nThe area of rectangle is : "<<length*breadth;
		}
};

int main(){
	
	int l,b;
	cout<<"\nEnter the length:"<<endl;
	cin>>l;
	cout<<"\nEnter the breadth:"<<endl;
	cin>>b;
	
	Find_area f;
	f.set_value(l,b);
	f.area();
//	




	
	
	
	return 0;
}
