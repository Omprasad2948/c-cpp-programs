#include<stdio.h>


int main(){
	
	
	char ch[50]="India is my country";
	int a=0;
	int len=0,start=0,next,end;
		
	while(ch[len]!='\0'){
		len++;
	}
	for(int i=0;i<=len;i++){
		if(ch[i]==' ' || ch[i]=='\0')
		{
			end=i-1;
			//printf("%d\n",end);
			int len1=start+end;
			//printf("%d\n",end/2);
			next=i+1;
			for(int j=start;j<=len1/2;j++)
			{
				char temp=ch[j];
				ch[j]=ch[end];
				ch[end]=temp;
				end--;
			}
			start=next;
			//printf("%d\n",start);
		}
		
	}
	
	puts(ch);
	
	
	
	return 0;
}
