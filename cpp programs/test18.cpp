#include<iostream>
#include<string.h>

using namespace std;
class StringOp{
	protected:
		char str[20];
		int len;
	public:
		void setString(char ch[],int l){
			strcpy(str,ch);
			len=l;
		}
		virtual void performOp()=0;
		
};
class Wordrev:public StringOp{
	public:
	void performOp(){
		int end=len-1;
		for(int i=0;i<len/2;i++){
			char temp=str[i];
			str[i]=str[end];
			str[end]=temp;
			end--;
		}
		cout<<"The word After reverse is :"<<endl;
		cout<<str;
	}
};

class maxrpt:public StringOp{
	public:
		void performOp(){
			int count=1,max=0,k=0;
			for(int i=0;i<len;i++){
				for(int j=i+1;j<len;j++){
					if(str[i]==str[j]){
						count++;
					}
				}
				if(count>max){
					max=count;
					k=i;
					count=1;
				}
			}
			cout<<"The max time repeated character is "<<str[k] <<" and its repeat "<<max <<" times";	
			
		}
};
int main(){
	
	char ch[20];
	int choice;
	cout<<"Enter the string "<<endl;
	cin>>ch;
	int len=0;
	while(ch[len]!='\0'){
		len++;
	}
	
	cout<<"Enter your choice"<<endl;
	cout<<"1:Reverse Word"<<endl;
	cout<<"2:Max Repetation"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			{
			Wordrev w;
			w.setString(ch,len);
			w.performOp();
			}
			break;
			
		case 2:
		{
			maxrpt m;
			m.setString(ch,len);
			m.performOp();		
		}
			break;
			
			default:
				cout<<"Wrong Choice";
			
	}
	
	
	return 0;
}



//create class name as StringOperation with virtual function name as performOperation()  and create its Two child classes
//    name as MaxRepetative , WordReverse. We need to inherit the Value class in MaxRepetative , WordReverse and override the virtual function 
//	in it write the logic.
