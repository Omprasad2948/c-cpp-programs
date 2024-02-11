#include<iostream>
#include<string.h>

using namespace std;
void frequencymeasure(int a[],int size){
	int even=0,odd=0;
	for(int i=0;i<size;i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<"\nThe even number in the array is : "<<even<<endl;
	cout<<"\nThe odd number in the array is : "<<odd<<endl;
}

void frequencymeasure(char ch[],int size){
	int vowel=0,consonant=0;
	for(int i=0;i<size;i++){
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
			vowel++;
		}
		else{
			consonant++;
		}
	}
	cout<<"\nThe number of the vowel is :  "<<vowel<<endl;
	cout<<"\nThe number of the consonant is : "<<consonant<<endl;
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
	 frequencymeasure(a,size);
	 frequencymeasure(ch,len);
	
	return 0;
}
