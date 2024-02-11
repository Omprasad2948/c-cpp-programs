#include<iostream>

using namespace std;
class Arrayop{
	protected:
		int *ptr,*ptr2;
		int len,len2;
	public:
		void setArray(int a[],int len){
			ptr=a;
			this->len=len;
		}
		void setArray1(int a[],int b[],int len,int len2){
			ptr=a;
			ptr2=b;
			this->len2=len2;
			this->len=len;
		}
		
	
	virtual void performop()=0;
};
class Unique :public Arrayop{
	public:
		void performop(){
			cout<<"The Unique element in the array is"<<endl;
		for(int i=0;i<len;i++){
			for(int j=i+1;j<len;j++){
				if(ptr[i]>ptr[j]){
					int temp=ptr[i];
					ptr[i]=ptr[j];
					ptr[j]=temp;
				}
			}
		}
		for(int i=0;i<len;i++){
			if(ptr[i]==ptr[i+1]){
				for(int j=i;j<len;j++){
					ptr[j]=ptr[j+1];
				}
				--len;
				--i;
			}
		}
		for(int i=0;i<len;i++){
			cout<<ptr[i]<<"\t";
		}
		}
		
};

class MergeArray:public Arrayop{
	public:
		void performop(){
			int length=len+len2;
			for(int i=0;i<len2;i++){
				ptr[len]=ptr2[i];
				len++;
			}
			cout<<"The array After merge is"<<endl;
			for(int i=0;i<length;i++){
				cout<<ptr[i]<<"\t";
			}
		}
};

int main(){
	
	int a[]={1,2,3,4,5},len,choice;
	len=sizeof(a)/sizeof(a[0]);
	int b[]={6,7,8,9,10},len2;
	len2=sizeof(b)/sizeof(b[0]);

	cout<<"Enter your choice"<<endl;
	cout<<"1:Unique"<<endl;
	cout<<"2:Merge"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			{
				Unique u;
			u.setArray(a,len);
			u.performop();
			}
			break;
			
		case 2:
		{
				MergeArray m;
			m.setArray1(a,b,len,len2);
			m.performop();
		}
			break;
			
			default:
				cout<<"Wrong Choice";
			
	}
	
	return 0;
}

//create class name as ArrayOperation with virtual function name as performOperation()  and create its Two child classes
//    name as Unique , MergeArray. We need to inherit the Value class in Unique , MergeArray and override the virtual function 
//	in it write the logic.
//	
//	1. Unique Class : -
//	
//	Input array elements: 1, 2, 3, 5, 1, 5, 20, 2, 12, 10 
//	Output :
//	All unique elements in the array are: 3, 20, 12, 10 

//MergeArray class :-
//	
//	Input -First Array :- 1 2 3 4 5
//             	Second Array :-  6 7 8 9 10 
//
//	Output - 1 10 2 9 3 8 4 7 5 6
