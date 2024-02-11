#include<iostream>

using namespace std;

int main(){
	
	int size,max,min;
	cout<<"\nEnter the size of an array:\n";
	cin>>size;
	
	int a[size];
	cout<<"\nEnter the array elements:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	
	max=a[0];
	cout<<"\nThe array max elements is:\n";
	for(int i=0;i<size;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<max<<endl;
	min=a[0];
	cout<<"\nThe array min elements is:\n";
	for(int i=0;i<size;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	cout<<min<<endl;
	
	return 0;
}
