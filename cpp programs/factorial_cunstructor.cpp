#include<iostream>

using namespace std;

class factorial{
	int num,fact;
	
	public:
		factorial(int num){
			this->num=num;
			fact=1;
		}
		
		int getfactorial(){
			for(int i=1;i<=this->num;i++){
				fact=fact*i;
			}
			return fact;
		}
	
};

int main(){
	int number,result;
	cout<<"Enter the number to print the factorial"<<endl;
	cin>>number;
	factorial f(number);
	result=f.getfactorial();
	cout<<"The factorial of number is "<<result<<"\n";
	
	return 0;
}
