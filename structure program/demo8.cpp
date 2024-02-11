#include<iostream>

using namespace std;

int main(){
int a[3][3]={1,2,3,
           4,5,6,
           7,8,9};
           
           for(int i=0;i<=2;i++){
           	for(int j=2;j>=0;j--){
           		int temp=a[j][i];
           		a[j][i]=a[i][j];
           		a[i][j]=temp;
           			//break;
			   }
		   }
              for(int i=0;i<3;i++){
              	for(int j=0;j<3;j++){
              		cout<<a[i][j];
				  }
				  cout<<"\n";
			  }    
	return 0;
}


//1 2 3                     7 4 1
//4 5 6  swap this matrxi   8 5 2
//7 8 9                     9 6 3

