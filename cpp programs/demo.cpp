#include<iostream>

using namespace std;
 void swap(int *a,int *b){
 	int temp=*a;
 	*a=*b;
 	*b=temp;
 	
 	printf("\nthe value of a is %d",*a);
 	printf("\nthe value of a is %d",*b);
 }
int main(){
	
	int a=5,b=10;
	
	cout<<"\nThe value of a is"<<a<<"\nThe value of b is"<<b<<endl;
	swap(&a,&b);
	cout<<"\nThe value of a is"<<a<<"\nThe value of b is"<<b<<endl;
	
	return 0;
}
