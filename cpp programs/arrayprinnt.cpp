#include<iostream>

using namespace std;

int main(){
	
	int size;
	cout<<"\nEnter the size of an array:\n";
	cin>>size;
	
	int a[size];
	cout<<"\nEnter the array elements:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	
	cout<<"\nThe array elements is:\n";
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
	
	return 0;
}
