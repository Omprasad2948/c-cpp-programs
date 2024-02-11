#include<iostream>

using namespace std;
int main(){
	
	
	int size,first,second;
	cout<<"Enter the size of a array :\n";
	cin>>size;
	int a[size],b[size];
	
	cout<<"\nEnter the array elements:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	cout<<"\nThe copied array is :\n";
	for(int i=0;i<size;i++){
		cout<<b[i]<<"\t";
	}
	
	return 0;
}
