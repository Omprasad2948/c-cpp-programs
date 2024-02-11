#include<iostream>
#include<string.h>

using namespace std;
class isogram{
	char *str;
	int len;
		
	public:
	void setstring(char ch[],int len){
		str=ch;
		this->len=len;
	}
	void checkstring();
};
void isogram::checkstring(){
	int i=0,flag=0;
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(*(str+i)==*(str+j)){
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		cout<<"The string is isogram"<<endl;
	}
	else{
		cout<<"The string is not isogram"<<endl;
	}
}

int main(){
	
	isogram s;
	char ch[20];
	
	int len=0;
	cout<<"Enter the string"<<endl;
	cin>>ch;
	while(ch[len]!='\0'){
		len++;
	}
	s.setstring(ch,len);
	s.checkstring();
	
	
	return 0;
}
