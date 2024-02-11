#include<stdio.h>
#include<conio.h>

int main(){
	
	char ch[50]="hey nayan and nitin you are god placed";
	int len=0,start=0,next,end,val,flag;
	
	while(ch[len]!='\0')
	{
		len++;
	}
	
	for(int i=0;i<=len;i++)
	{
		end=i-1,flag=0;
		int len1=start+end;
		if(ch[i]==' ' || ch[i]=='\0')
		{
			for(int j=start;j<=len/2;j++)
			{
				val=ch[j]-ch[end];
				if(val!=0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(int j=start;j<=len1;j++)
				{
					printf("%c",ch[j]);
				}
			}
		}
		start=next;
	}
	
	return 0;
}
