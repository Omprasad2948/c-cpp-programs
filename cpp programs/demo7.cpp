#include<stdio.h>
#include<conio.h>
#include<string.h>

void sort(char ch[]){
	
		for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++){
			char temp=ch[i];
			ch[i]=ch[j];
			ch[j]=temp;
		}
	}
	printf("%s",ch-48);
}
int main(){
	
	
	int a[]={5732,8659,2534,9625,7354,1325};
	int len=sizeof(a)/sizeof(a[0]);
	char ch[10];
	for(int i=0;i<len;i++){
		strcpy(ch,(char *)a[i]);
		sort(ch);
		
	}
	
	
	
	return 0;
}
