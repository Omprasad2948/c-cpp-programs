#include<stdio.h>
#include<string.h>

int main(){
	
	
	char ch[50]="hey nitin and nayan you are placed";

	int first =0,next,end;
	int len=strlen(ch);
	for(int i=0;i<=len;i++){
		
		if(ch[i]==' '|| ch[i]=='\0'){
			end=i-1;
		    next=i+1;
		     int len1=first+end;
			for(int j=first;j<=(len1/2);j++){
				
				char temp=ch[j];
				ch[j]=ch[end];
				ch[end]=temp;
				end--;
			}
			
			first=next;
		}
		
	}
	
	
	return 0;
}
