#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	printf("Enter the string :\n");
	char ch[50];
	gets(ch);
	int len;
	len=strlen(ch);
	int sum=0;

	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>=48 && ch[i]<=57)
		{
			sum= sum+ch[i]-48;
		
			if(ch[i+1]>=48 && ch[i+1]<=57)
			{
			sum=sum*10;
		    }
		    				
	   }
	  
    }	
	printf("The sum is %d",sum);
	return 0;
}

//gopal123s123 = 246
