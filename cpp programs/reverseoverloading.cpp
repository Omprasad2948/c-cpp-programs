#include<iostream>
#include<string.h>

using namespace std;
void reverse(int a[],int size){
	int end=size-1,temp;
	for(int i=0;i<size/2;i++){
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
}

void reverse(char ch[],int size){
	char temp;
	int end=size-1;
	for(int i=0;i<size/2;i++){
		temp=ch[i];
		ch[i]=ch[end];
		ch[end]=temp;
		end--;
	}
	cout<<"The reverse string is :\n"<<ch;
	
}
int main(){
	int size,len;
	cout<<"\nEnter the size of an array:\n";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements of an array:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	_flushall();
	 char ch[90];
	 cout<<"\nEnter the string :\n";
	 gets(ch);
	 len=strlen(ch);
	reverse(a,size);
	cout<<"\n";
	reverse(ch,len);
	
	return 0;
}
