#include<iostream>

using namespace std;

class rectangle{
	
	private:
		float length,breadth;
	public:
		rectangle(float length){
			this->length=length;
		}
		void setbreadth(float breadth){
			this->breadth=breadth;
		}
		
		float area(){
			return length*breadth;
		}
	
};

int main(){
	
	float length,breadth,result;
	cout<<"Enter the length and breadth of rectangle."<<endl;
	cin>>length>>breadth;
	rectangle r(length);
	r.setbreadth(breadth);
	result=r.area();
	
	cout<<"The area of rectangle is "<<result<<endl;
	
	
	return 0;
}
