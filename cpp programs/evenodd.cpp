#include<iostream>

using namespace std;

int main(){
	
	int n=1,num;
	cout<<"Enter the nth number :\n";
	cin>>num;
	
	cout<<"The even number from 1 to n is :\n";
	while(n<=num){
		if(n%2==0){
			cout<<n<<"\t";
		}
		n++;
		
	}
	n=1;
	cout<<"\nThe odd number from 1 to n is :\n";
	while(n<=num){
		if(n%2!=0){
			cout<<n<<"\t";
		}
		n++;
		
	}
	
	return 0;
}
