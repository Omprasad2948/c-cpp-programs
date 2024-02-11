#include<iostream>

using namespace std;

class fibo{
	
	int f1,f2,n,f3;
	public:
		fibo(){
		f1=0;
		f2=1;
		}
	void setn(int n){
		this->n=n;	
		}
	void display(){
		cout<<f1<<"\t"<<f2<<"\t";
		for(int i=0;i<=n;i++){
			f3=f1+f2;
			cout<<f3<<"\t";
			f1=f2;
			f2=f3;
		}
	}
};

int main(){
	
	fibo f;
	int n;
	cout<<"Enter the nth term"<<endl;
	cin>>n;
	f.setn(n);
	f.display ();
	
	
	
}
