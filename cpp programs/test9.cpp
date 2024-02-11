#include<iostream>

using namespace std;
class value{
	protected:
		int no;
	public:
		void setNum(int x){
			no=x;
		}
};
class Square:public value{
	public:
		int getSquare(){
			return no*no;
		}
};
int main(){
	
	Square s;
	int num,result;
	cout<<"Enter the number to calculate the square"<<endl;
	cin>>num;
	s.setNum(num);
	result=s.getSquare();
	cout<<"The square of "<<num<<" is "<<result<<endl;
	
	
	return 0;
}

//this is the example of single level inheritence
