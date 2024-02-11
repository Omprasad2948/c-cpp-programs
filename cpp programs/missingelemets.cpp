#include<iostream>

using namespace std;

int main(){
	
	int size,first,second;
	cout<<"Enter the size of a array :\n";
	cin>>size;
	int a[5];
	
	cout<<"\nEnter the array elements:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"\nThe array is :\n";
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
	
	cout<<"\nThe missing elements are:\n";
		for(int i=0;i<size;i++){
		first=a[i]+1;
		second=a[i+1];
		for(int j=first;j<second;j++){
			cout<<j<<"\t";
		}
	}
	
	
	return 0;
}
