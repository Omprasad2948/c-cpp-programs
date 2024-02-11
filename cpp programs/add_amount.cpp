#include<iostream>

using namespace std;
class AddAmount{
  	int amount;
	
	public:
	 AddAmount(int amount){
			this->amount=amount;
			cout<<"The Initial amount is "<<amount<<endl;
		}
	void addvalue(int amt){
			amount=amount+amt;
			cout<<"The amount after added is "<<amount<<endl;
		}
};


int main(){
	
	AddAmount am(50);
	am.addvalue(20);

	
	
	
	return 0;
}
