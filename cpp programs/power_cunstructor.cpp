#include<iostream>

using namespace std;

class power{
	
	int b,i;
	
	public:
		power(int base,int index){
			b=base;
			i=index;
			
		}
		
		void getpower(){
			int p=1;
			for(int i=1;i<=this->i;i++){
				p=p*b;
			}
			cout<<"The power is "<<p<<"\n";
		}
		
};

int main(){
	
	int b,i;
	cout<<"Enter the base and index"<<endl;
	cin>>b>>i;
	power b1(b,i);
	b1.getpower();
}
