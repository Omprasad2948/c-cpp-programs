#include<iostream>

using namespace std;

class Rectangle{
	
	private:
		float length,breadth;
		
	public:
		Rectangle(){
			cout<<"The area of rectangle "<<endl;
		}
		
		void setval(float length,float breadth){
			this->length=length;
			this->breadth=breadth;
			
		}
		
		int area(){
			return length*breadth;
		}
	
	
	
};

int main(){
	
	
Rectangle r;
r.setval(4.0,5.0);
float result=r.area();
cout<<result;
	
	return 0;
}
