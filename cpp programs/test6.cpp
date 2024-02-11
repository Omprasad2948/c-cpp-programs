//Q 1. Write a cpp program to create program for constructor overloading with class name as ArrayCons
//			ArrayCons (int a [],int value): this function is used for accept array as parameter and pass value and
//			search value in array.
//			ArrayCons(int a[] , int b[]): this function will accept array as parameter and check array is anagram or not.

#include<iostream>


using namespace std;

class arraycons{
	int *ptr,*ptr1,*ptr2;
	int value;
	
	public:
		arraycons(int a[],int value){
			ptr=a;
			this->value=value;
		}
		
		arraycons(int a[],int b[]){
			ptr1=a;
			ptr2=b;
		}	
	void searchvalue();	
	void anagram();
};
void arraycons::searchvalue(){
	int i=0,flag=0;
	for(i=0;i<5;i++){
		if(*(ptr+i)==value){
			flag=1;
		}
	}
	if(flag==1){
		cout<<"The value is present in the array"<<endl;
	}
	else
	{
		cout<<"The value is not present in the array"<<endl;
	}
}

void arraycons::anagram(){
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(*(ptr1+i)>*(ptr1+j)){
				int temp=*(ptr1+i);
				*(ptr1+i)=*(ptr1+j);
				*(ptr1+j)=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(*(ptr2+i)>*(ptr2+j)){
				int temp=*(ptr2+i);
				*(ptr2+i)=*(ptr2+j);
				*(ptr2+j)=temp;
			}
		}
	}
	int flag=0;
	for(int i=0;i<5;i++){
		if(*(ptr1+i)!=*(ptr2+i)){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"The array is anagram"<<endl;
	}
	else{
		cout<<"The array is not anagram"<<endl;
	}
}
int main(){
	
	int a[]={1,2,3,4,5},val=4,choice;
	int b[]={5,4,1,2,3};
	
	cout<<"Enter your choice"<<endl;
	cout<<"1:Search the value in the array"<<endl;
	cout<<"2:check whether the array is anagram or not"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
		{
			arraycons ar(a,val);
			ar.searchvalue();
		}
			break;
			
		case 2:
			{
				arraycons arr(a,b);
				arr.anagram();
			}
			break;
			
			default:
				cout<<"Wrong input"<<endl;
	}
	
	return 0;
}
