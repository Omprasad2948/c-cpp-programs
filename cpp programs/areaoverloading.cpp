#include<iostream>
#include<math.h>
using namespace std;
void calArea(float n){
	cout<<"\nThe area of the circle is :"<<3.14f*n*n;
	
}

void calArea(int l,int b){
	
	cout<<"\nThe area of rectangle is :"<<l*b;
}
int main(){
	
float radius;
int length,breadth;
cout<<"Enter the radius :\n";
cin>>radius;
cout<<"Enter the length :\n";
cin>>length;
cout<<"Enter the breadth :\n";
cin>>breadth;

calArea(radius);
calArea(length,breadth);	
	
	
	return 0;
}
