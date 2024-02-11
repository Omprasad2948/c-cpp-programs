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
	
	cout<<"\nEnter the number to search h:\n";
	int num,flag=0;
	cin>>num;
	
	for(int i=0;i<=size;i++){
		if(a[i]==num){
			flag=1;
			break;
		}	
	}
	if(flag==1){
		cout<<"\nThe number is available in the array .\n";
	}
	else{
		cout<<"\nThe number is not available in the array.\n";
	}

	
	
	return 0;
}
