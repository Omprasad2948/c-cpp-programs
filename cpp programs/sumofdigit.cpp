#include<iostream>

using namespace std;

int main(){
	
	long int i=0,len=0,sum=0,num=0,c=0;
	char str[50];
	cout<<"\nEnter the string\n";
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='0' && str[i]<='9'){
			c++;
			num=num*10+(str[i]-'0');
		}
		else{
			sum=sum+num;
			num=0;
		}
	}
	sum=sum+num;
	cout<<"\nNo of digit is "<<c;
	cout<<"\nSum of digit is "<<sum;
	
	
	return 0;
}
