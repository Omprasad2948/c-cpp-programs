#include<iostream>
#include<string.h>

using namespace std;
class palindrome{
	int *ptr,size,len;
	char *str;
	
	public:
		void palindromearray(int a[],int size);
		void palindromearray(char a[],int len);
};
void palindrome::palindromearray(int a[],int size){
	ptr=a;
	this->size=size;
	int flag=0,j=size-1;
	for(int i=0;i<size/2;i++){
		if(*(ptr+i)!=*(ptr+j)){
			flag=1;
			break;
		}
		--j;
	}
	if(flag==0){
		cout<<"The array is palindrome"<<endl;
	}
	else{
		cout<<"The array is not palindrome."<<endl;
	}
	
}

void palindrome::palindromearray(char ch[],int len){
	str=ch;
	this->len=len;
	int flag=0,j=len-1;
	for(int i=0;i<len/2;i++){
		if(*(str+i)!=*(str+j)){
			flag=1;
			break;
		}
		--j;
	}
	if(flag==0){
		cout<<"The array is palindrome"<<endl;
	}
	else{
		cout<<"The array is not palindrome."<<endl;
	}
}
int main(){
	
	int a[5]={1,2,3,2,3},size,choice;
	char ch[20]="aman";
	size=sizeof(a)/sizeof(a[0]);
	int len=0;
	while(ch[len]!='\0'){
		len++;
	}
	palindrome p;
	
	cout<<"Enter your choice"<<endl;

	cout<<"1.check integeric array as pallindrome or not"<<endl;
	cout<<"2.check characteric array as pallindrome or not"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			{
				p.palindromearray(a,size);
			}
			break;
				
		case 2:
			{
				p.palindromearray(ch,len);
			}
			break;
			
			default:
				cout<<"Wrong choice"<<endl;
	}
	
	
	
	return 0;
}
