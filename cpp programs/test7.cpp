//Write a cpp program to create a class name as StringApp using parameterized constructor to accept string and 
//				create function name as performOperation() to implement the logic.
//				
//				Input : - Indian
//				Search Value : - d
//				Output : - n  i

#include<iostream>

using namespace std;
class stringapp{
	char *str;
	int len;
	public:
		stringapp(char ch[],int len){
			str=ch;
			this->len=len;
		}
		void performop();
		
		
}; 
void stringapp::performop(){
	char s;
	cout<<"Enter the character"<<endl;
	cin>>s;
	for(int i=0;i<len;i++){
		if(str[i]==s){
			cout<<str[i-1]<<" "<<str[i+1];
			break;
		}
	}
}
int main(){
	
	char ch[20];
	cout<<"Enter the string"<<endl;
	cin>>ch;
	int len=0;
	while(ch[len]!='\0'){
		len++;
	}
	
	stringapp c(ch,len);
	c.performop();
	return 0;
}
