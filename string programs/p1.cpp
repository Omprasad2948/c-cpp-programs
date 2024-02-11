#include<stdio.h>
#include<string.h>
int main()
{
int i=0,len=0;
char ch[20];
printf("Enter a string:\n");
gets(ch);
while(ch[i]!='\0')
{
	len++;
	i++;
}
printf("\nlength=%d",len);


return 0;

}
