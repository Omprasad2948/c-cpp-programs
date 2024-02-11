#include<iostream>
#include<string.h>

using namespace std;

class Reverseapp{
	private:
		int *ptr,len;
		char *ptr1;
	public:
		Reverseapp(int a[],int len){
			ptr=a;
			this->len=len;
			int end=len-1;
			for(int i=0;i<len/2;i++){
				int temp=ptr[i];
				ptr[i]=ptr[end];
				ptr[end]=temp;
				end--;
			}
			for(int i=0;i<len;i++){
				cout<<ptr[i]<<"\t";
			}
			cout<<endl;
		}
		Reverseapp(char ch[],int len){
			ptr1=ch;
			this->len=len;
			int end=len-1;
			for(int i=0;i<len/2;i++){
				char temp=ptr1[i];
				ptr1[i]=ptr[end];
				ptr1[end]=temp;
				end--;
			}
			for(int i=0;i<len;i++){
				cout<<ptr[i]<<"\t";
			}
			cout<<endl;
		}
};

int main(){
	
	int size;
	cout<<"Enter the size of an array"<<endl;
	cin>>size;
	int a[size],len,len2;
	cout<<"Enter the elements in the array."<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	len=sizeof(a)/sizeof(a[0]);
	char ch[20];
	cout<<"Enter the string input to revesrse"<<endl;
	gets(ch);
	len2=strlen(ch);
		
		
	cout<<"1:Rverse the integer Array."<<endl;
	cout<<"2:Rverse the characteric Array."<<endl;
	int choice;
	cout<<"Enter your choice."<<endl;
	cin>>choice;
	switch(choice)
	{
		
		case 1:
			{
					Reverseapp op(a,len);
			}
		
		
			break;
			
		case 2:
			
			{
				Reverseapp op1(ch,len2);	
			}
		
			break;
			
		default:
			cout<<"Wrong input"<<endl;
		
	}
	
	
	
	return 0;
}
