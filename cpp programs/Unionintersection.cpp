#include<iostream>

using namespace std;

class Unionintersection{
	int *ptr1,*ptr2,l1,l2;
	
	public:
	Unionintersection(int a[],int b[],int len1,int len2){
		ptr1=a;
		ptr2=b;
		l1=len1;
		l2=len2;	
	}	
	
	void union1();
  
};
// scope resolution operator

void Unionintersection::union1(){
		int arr1[l1+l2];
		//copy first array
		for(int i=0;i<l1;i++){
			arr1[i]=*(ptr1+i);
		}
		//copy second array
		for(int i=0;i<l2;i++){
			arr1[l1+i]=*(ptr2+i);
		}
		//array merging
		
		for(int i=0;i<l1+l2;i++){
			cout<<arr1[i]<<"\t";
		}
		cout<<endl;
		//array ascending sorting
		for(int i=0;i<l1+l2;i++){
			for(int j=i+1;j<l1+l2;j++){
				if(arr1[i]>arr1[j]){
					int temp=arr1[i];
					arr1[i]=arr1[j];
					arr1[j]=temp;
				}
			}
		}
			for(int i=0;i<l1+l2;i++){
			cout<<arr1[i]<<"\t";
		}
		
//		//The logic for union
//		int temp=l1+l2;
//		
//		cout<<endl<<temp;
//		for(int i=0;i<l1+l2;i++){
//			if(arr1[i]==arr1[i+1]){
//				for(int j=i;j<l1+l2;j++){
//					arr1[j]=arr1[j+1];
//				}
//				i--;
//				temp--;
//			}
//		}
//		cout<<endl<<temp;
		
//		for(int i=0;i<temp;i++){
//			cout<<arr1[i]<<"\t";
//		}
	}


int main(){
	
	int a[]={1,1,4,5,6},b[]={5,6,7,8,9},len1,len2;
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	
	Unionintersection un(a,b,len1,len2);
	un.union1();
	
	
	
	return 0;
}
