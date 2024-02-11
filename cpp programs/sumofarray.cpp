#include<iostream>

using namespace std;

int main(){
	
	int size,sum=0;
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
		sum=sum+a[i];
	}
	cout<<"\nThe sum of array is : "<<sum<<"\n";
	
	return 0;
}
