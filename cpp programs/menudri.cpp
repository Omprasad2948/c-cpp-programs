#include<iostream>
#include<math.h>
using namespace std;

void primenum(int num){
	
	for(int i=1;i<=num;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
					cout<<i<<"\t";
					
				}
	}			
}

void perfectnum(int num){
	for(int j=1;j<=num;j++){
	int temp=j,sum=0;
				for(int i=1;i<j;i++)
				{
					if(j%i==0)
					{
						sum=sum+i;
					}
				}
				if(temp==sum)
				{
					cout<<j<<"\t";
				}	
	}
	
			
				
}

void ducknum(int num){
	for(int k=1;k<=num;k++)
	{
	int rem,flag=0,i;
	i=k;
	while(i!=0)
	{
	    rem=i%10;
		if(rem==0)
		{
			flag=1;
			break;
		}
		i=i/10;
	}
	if(flag==1)
	{
		cout<<i<<"\t";
	}
	
	}
	
}

void armstrongnum(int num){
	for(int i=1;i<=num;i++){
		int temp=i,sum=0,count=0,rem;
				int power;
				while(temp!=0){
					count++;
					temp/=10;
				}
				temp=i;
				while(temp!=0){
					rem=temp%10;
					power=pow(rem,count);
					sum=sum+power;
					temp=temp/10;
				}
				if(sum==i){
					cout<<sum<<"\t";
				}
	}
}

void strongnum(int num){
	for(int j=1;j<=num;j++){
		int rem,sum=0,temp=j;
	
	while(temp!=0){
		int fact=1;
		rem=temp%10;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
			}
			temp=temp/10;
			sum=sum+fact;
			
				}
				if(sum==j){
					cout<<j<<"\t";
				}
	}
}

int main(){
	
	int num,choice;
	cout<<"\nEnter the number :\n";
	cin>>num;
	do{
		cout<<"\n\n\n";
		cout<<"1:prime 1 to nth"<<endl;
		cout<<"2:perfect 1 to nth"<<endl;
		cout<<"3:Duck 1 to nth"<<endl;
		cout<<"4:strong 1 to nth"<<endl;
		cout<<"5:Armstrong 1 to nth"<<endl;
		cout<<"6:Exit the code"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				primenum(num);
				break;
			
			case 2:
				perfectnum(num);
				break;
				
			case 3:
				ducknum(num);
				break;
				
			case 4:
				strongnum(num);
				break;
				
			case 5:
				armstrongnum(num);
				break;
				
			default:
				cout<<"\n------------------------------Thanks for using this code----------------------------------------\n";
		}
		
	}while(choice!=6);
	
	
	
	return 0;
}
