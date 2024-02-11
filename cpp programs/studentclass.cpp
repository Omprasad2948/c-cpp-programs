#include<iostream>
#include<string.h>

using namespace std;

class student{
	
	private:
		int rno;
		char name[50];
		float per;
		
	public:
		void set_data(int r,char n[],float p){
			rno=r;
			strcpy(name,n);
			per=p;
		}
		int getper(){
			return per;
		}
		void show(){
			cout<<rno<<"\t"<<name<<"\t"<<per<<"\n";
		}
	
};


int main(){
	
	student s[20];
	int r,no,index;
	char n[50];
	float p,max;
	cout<<"Enter the number of students :\n";
	cin>>no;
	for(int i=0;i<no;i++){
		cout<<"Enter the records of"<<i+1<<" students\n";
		cin>>r>>n>>p;
		s[i].set_data(r,n,p);
	}
	cout<<"The students record is :\n";
	for(int i=0;i<no;i++){
		s[i].show();
	}
	cout<<"The student with maximum percenatage is:\n";
	 max=s[0].getper();
	 index=0;
	for(int i=0;i<no;i++){
		if(s[i].getper()>max)
		{
		   index=i;
		   max=s[i].getper();
		}
	}
	s[index].show();
	
	return 0;
}
