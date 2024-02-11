#include<iostream>

using namespace std;

class rectangle{
	private:
		float length,breadth;
	public:
		rectangle(float length,float breadth){
			this->length=length;
			this->breadth=breadth;
		}
		
		float area(){
			return length*breadth;
		}
	
	
};

int main(){
	
	float length,breadth,result;
	cout<<"Enter the value of length and breadth"<<endl;
	cin>>length>>breadth;
	rectangle r(length,breadth);	
	result=r.area();
	cout<<"The area of rechatngle is "<<result;
	

	
	return 0;
}
