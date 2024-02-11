#include<iostream>

using namespace std;

int main(){
	
	int size,start,end;
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
	
	start=0;
	end=size-1;
	for(int i=0;i<size/2;i++){
		int temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	cout<<"\nThe Reverse array is:\n";
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
	
	return 0;
}
