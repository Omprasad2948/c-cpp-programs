#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int num;
	cout<<"\nEnter the nth number to print the strong number :\n";
	cin>>num;
	int rem;
	for(int i=1;i<=num;i++){
		int temp=i,sum=0,temp2=i;
		while(temp!=0){//145  14
			int fact=1;
			rem=temp%10;//5 4
			for(int j=1;j<=rem;j++){
				fact=fact*j;//120  24
			}
			sum=sum+fact; //120 144
			temp=temp/10;	//14 1
		}
		if(sum==temp2){
			cout<<sum<<"\t";
		}
	}
	
	return 0;
}
