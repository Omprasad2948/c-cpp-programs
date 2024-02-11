#include<iostream>

using namespace std;
class Circle{
	protected:
		float radius;
	public:
		void setRadius(float r){
			radius=r;
		}
};

class Recta{
	protected:
		float length,width;
	public:
		void setlenghtb(float l,float b){
			length=l;
			width=b;
		}
};

class Area:public Circle,public Recta{
	public:
		float areacircle(){
			return radius*radius*3.1f;
		}
		
		int areaRact(){
			return length*width;
		}
};
int main(){
	Area a;
	a.setRadius(2.0f);
	float result=a.areacircle();
	cout<<"The area of circle is "<<result<<endl;
	
	a.setlenghtb(2,4);
	result=a.areaRact();
	cout<<"Area of rectangle is "<<result<<endl;
	
	
	
	return 0;
}

//this is the Example using Multiple Inheritances
