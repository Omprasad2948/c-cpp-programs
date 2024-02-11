#include<stdio.h>
#include<string.h>
int main()
{
int i=0,len=0,j,x;
char ch[20],ch1[20];
printf("Enter a string:\n");
gets(ch);
while(ch[i]!='\0')
{
	len++;
	i++;
}
printf("\nlength=%d\n\n  ",len);
for(i=len-1,j=0;i>=0;j++,i--){
	ch1[j]=ch[i];
}
ch1[j]='\0';
for(i=0;i<=len;i++){
	x=ch[i]-ch1[i];
	if(x!=0){
		break;
	}
}
if(x==0){
	printf("The string is palindrome.\n");
}
else{
	printf("The string is not palindrome.\n");
}

return 0;

}
