#include<iostream>

using namespace std;
class mergearray{
	int *ptr1,*ptr2;
	
	public:
		mergearray(int a[],int b[]){
			ptr1=a;
			ptr2=b;
		}
		
		void display(){
			int i=5;
			for(int j=0;j<5;j++){
				ptr1[i]=ptr2[j];
				i++;
			}
			
			for(int i=0;i<10;i++){
				cout<<ptr1[i]<<"\t";
			}
		}
	
	
};
int main(){
	
	int a[]={1,2,3,4,5},b[]={6,7,8,9,10};
	
	mergearray m(a,b);
	m.display();
	
	
	return 0;
}
