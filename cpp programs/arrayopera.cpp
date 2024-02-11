#include<iostream>

using namespace std;

void arrayop(int a[],int size){
	int flag=0;
	for(int i=0;i<size;i++){
		int count=1;
		for(int j=i;j<size;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count>size/2){
			flag=1;
		}
	}
	if(flag==1){
		cout<<"\nThe array is Majority"<<endl;
	}
	else{
		cout<<"\nThe array is not Majority"<<endl;
	}
	
}

void arrayop(int a[],int b[],int size){
	int j=size;
	for(int i=0;i<size;i++){
		a[j]=b[i];
		j++;
	}
	for(int i=0;i<j;i++){
		for(int k=i+1;k<j;k++){
			if(a[i]>a[k]){
				int temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	
	cout<<"\nThe Union is :"<<endl;
	for(int i=0;i<j;i++){
		if(a[i]==a[i+1]){
			for(int k=i;k<j;k++){
				a[k]=a[k+1];
			}
			j--;
     	    i--;
		}
		
	}
	for(int i=0;i<j;i++){
		cout<<a[i]<<" ";
	}
	
}

int main(){
	
	int size;   
	cout<<"\nEnter the size of an array:\n";
	cin>>size;
	int a[5],b[5];
	cout<<"\nEnter the first array elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"\nEnter the Second array elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>b[i];
	}
	
	arrayop(a,size);
	cout<<"\n";
	arrayop(a,b,size);
	
	return 0;
}
