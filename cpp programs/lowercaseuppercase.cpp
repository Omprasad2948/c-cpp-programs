#include<iostream>


using namespace std;

int main(){
	
	char ch='a';
	cout<<"\nThe lowercase character is:\n";
	while(ch<='z'){
		cout<<ch<<"\t";
		ch++;
	}
	
	
	cout<<"\nThe uppercase character is:\n";
	ch='A';
	while(ch<='Z'){
		cout<<ch<<"\t";
		ch++;
	}
	return 0;
}
