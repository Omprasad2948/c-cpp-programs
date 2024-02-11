#include<iostream>

using namespace std;
class Arrayoperations{
	private:
		int *ptr,size;
	public:
		Arrayoperations(int a[],int size){
			ptr=a;
			this->size=size;
		}
		
		void ascending();
		void descending();
		void sumofdigit();
		void sortevenodd();
		void storeprime();
};

void Arrayoperations::ascending(){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(*(ptr+i)>*(ptr+j)){
				int temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	cout<<"The array after ascending sorting is."<<endl;
	for(int i=0;i<size;i++){
		cout<<*(ptr+i)<<"\t";
	}
	cout<<endl;
}
void Arrayoperations::descending(){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(*(ptr+i)<*(ptr+j)){
				int temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	cout<<"The array after Descending sorting is."<<endl;
	for(int i=0;i<size;i++){
		cout<<*(ptr+i)<<"\t";
	}
	cout<<endl;
}
void Arrayoperations::sumofdigit(){
	int a[size];
	for(int i=0;i<size;i++){
		a[i]=*(ptr+i);
	}

	for(int i=0;i<size;i++){
		int count=0,temp=a[i],b[count];
		while(temp!=0){
		b[count]=temp%10;
		temp/=10;
		count++;
		}
		int sum=0;
		
		for(int j=0;j<count;j++){
			sum=sum+b[j];
		}
		a[i]=sum;
	}
	for(int i=0;i<size;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void Arrayoperations::sortevenodd(){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(*(ptr+i)%2!=0){
				int temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	cout<<"The array after sort even and odd"<<endl;
	for(int i=0;i<size;i++){
		cout<<*(ptr+i)<<"\t";
	}
	cout<<endl;
}
	void Arrayoperations::storeprime(){
			int a[size];
		for(int i=0;i<size;i++){
			a[i]=*(ptr+i);
		}
	
		for(int i=0;i<size;i++){
			int count=0,temp=a[i],b[count];
			while(temp!=0){
			b[count]=temp%10;
			temp/=10;
			count++;
			}
			int end=count-1;
			for(int j=0;j<count/2;j++){
				int temp1=b[j];
				b[j]=b[end];
				b[end]=temp1;
				end--;
			}
			int sum=0;
			
			for(int j=0;j<count;j++){
				int count1=0;
				for(int k=1;k<=b[j];k++){
					if(b[j]%k==0){
						count1++;
					}
				}
				if(count1==2){
					sum=sum*10+b[j];
				}
			}
			a[i]=sum;
			sum=0;
		}
		for(int i=0;i<size;i++){
			cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
	
	int main(){
		
		int size,choice;
		cout<<"Enter the size of an array"<<endl;
		cin>>size;
		int a[size];
		
		cout<<"Enter the elemets in the array"<<endl;
		for(int i=0;i<size;i++){
			cin>>a[i];
		}
		
		Arrayoperations op(a,size);
	
	cout<<"1:Ascending Order."<<endl;
	cout<<"2:Descending Order."<<endl;
	cout<<"3:Sum of Digit in the array."<<endl;
	cout<<"4:Sort even and odd Order."<<endl;
	cout<<"5:store prime number in the array."<<endl;
	cin>>choice;
	
	switch(choice){
		
		case 1:
			op.ascending();
			break;
			
		case 2:
			op.descending();
			break;
			
		case 3:
			op.sumofdigit();
			break;
			
		case 4:
			op.sortevenodd();
			break;
			
		case 5:
			op.storeprime();
			break;
			
		default:
			cout<<"Wrong Input"<<endl;
			break;
	}
	
	return 0;
}
