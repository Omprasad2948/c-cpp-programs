#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,len=0,count=0,count1=0;
	char ch[20];
	 printf("enter a string :\n");
	 gets(ch);
	 while(ch[i]!='\0')
	 {
	 	len++;
	 	i++;
	 }
	 printf("length=%d\n",len);
	 for(i=0;i<len;i++)
	 {
	 	if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u' )
	 	{
	 		count++;
	 		
		 }
		 else
		 {
		 	count1++;
		 }
	 }
	 printf("vowel=%d\n",count);
	printf("consonent=%d",count1);
	
	
	
	return 0;
}
