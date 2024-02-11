#include<iostream>
#include<math.h>
using namespace std;

void primenum(int num){
	int count=0;
	for(int i=1;i<=num;i++)
	            {
					if(num%i==0)
					{
						count++;
					}
				}
				if(count==2){
					cout<<"\nThe number is prime number.\n";
					
				}
				else{
					cout<<"\nThe number is not prime number.\n";
				}
			
}

void perfectnum(int num){
	int temp=num,sum=0;
				for(int i=1;i<num;i++)
				{
					if(num%i==0)
					{
						sum=sum+i;
					}
				}
				if(temp==sum)
				{
					cout<<"\nThe number is perfect number.\n";
				}
				else
				{
					cout<<"\nThe number is not perfect number.\n";
				}
				
}

void ducknum(int num){
	int rem,flag=0;

	while(num!=0)
	{
	    rem=num%10;
		if(rem==0)
		{
			flag=1;
			break;
		}
		num=num/10;
	}
	if(flag==1)
	{
		cout<<"\nThe number is Duck number\n";
	}
	else{
		cout<<"\nThe number is not Duck number.\n";
		}
}

void armstrongnum(int num){
	int temp=num,sum=0,count=0,rem;
				int power;
				while(temp!=0){
					count++;
					temp/=10;
				}
				temp=num;
				while(num!=0){
					rem=num%10;
					power=pow(rem,count);
					sum=sum+power;
					num=num/10;
				}
				if(sum==temp){
					cout<<"\nThe number is armstrong Number .\n";
				}else{
					cout<<"\nThe number is not Armstrong number.\n";
				}
}

void strongnum(int num){
	int rem,sum=0,temp=num,fact=1;
	
	while(num!=0){
		rem=num%10;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
			}
			sum=sum+fact;
			num=num/10;
				}
				if(sum==temp){
					cout<<"\nThe number is Strong number.\n";
				}
				else{
					cout<<"\nThe number is not Strong number.\n";
				}
}

int main(){
	
	int num,choice;
	cout<<"\nEnter the number :\n";
	cin>>num;
	do{
		cout<<"\n\n\n";
		cout<<"1:check number prime or not"<<endl;
		cout<<"2:check number perfect or not"<<endl;
		cout<<"3:check number Duck or not"<<endl;
		cout<<"4:check number strong or not"<<endl;
		cout<<"5:check number Armstrong or not"<<endl;
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
