#include<iostream>

using namespace std;
void arrayoperation(int a[],int size){
	cout<<"\nThe array in ascending order:\n";
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\nThe array in descending order:\n";
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
}
//______________________________________________________

void arrayoperation(int c[],int d[],int size){
	int j=size;
	for(int i=0;i<size;i++){
		c[j]=d[i];
		j++;		
	}
		for(int i=0;i<j;i++){
		cout<<c[i]<<"\t";
	}
	
}

int main(){
	
	int size;
	cout<<"\nEnter the array size:\n";
	cin>>size;
	int a[size],b[size];
	
	cout<<"\nEnter the first array :\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	
	cout<<"\nEnter the second array :\n";
	for(int i=0;i<size;i++){
		cin>>b[i];
	}
	
	arrayoperation(a,size);
	cout<<"\n";
	arrayoperation(a,b,size);
	
	return 0;
}
