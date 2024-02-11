#include<iostream>
using namespace std;

 class power{
 
 	public:
 		int get_cube(int x){
 			return x*x*x;	
 			
		 }
		
 	
 };

int main(){
	
	power p;
	 int result=p.get_cube(5);
	 cout<<result;
	return 0;
	
}
