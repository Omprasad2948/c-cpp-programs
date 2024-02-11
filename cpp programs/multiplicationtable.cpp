#include<iostream>

using namespace std;
int main(){
	
	int num;
	int i=1;
	cout<<"Enter the num to print the table:\n";
	cin>>num;
	while(i<=10){
		cout<<num<<"*"<<i<<"="<<num*i<<"\n";
		i++;
	}
	
	return 0;
}
