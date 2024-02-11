#include<iostream>

using namespace std;
class majority{
	int *ptr;
	
	public:
		majority(int a[]){
			ptr=a;
		}
		int getmajority(){
			int count,flag=0;
			for(int i=0;i<5;i++){
				count =1;
				for(int j=i+1;j<5;j++){
					if(ptr[i]==ptr[j]){
						count++;
					}
				}
				if(count>2){
					flag=1;
					break;
				}
			}
			return flag;
		}
	
	
};

int main(){
	
	int a[5],result;
	cout<<"Enter the elements in the array "<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	
	majority m(a);
	result=m.getmajority();
	if(result==1){
		cout<<"The array is majority"<<endl;
	}
	else{
		cout<<"The array is not majority"<<endl;
	}
	
	
	
	return 0;
}
