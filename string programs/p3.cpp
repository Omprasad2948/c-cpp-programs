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
printf("The string After Reverse:\n");
for(i=len-1;i>=0;i--){
	printf("%c",ch[i]);
}
printf("\n");
strrev(ch);
puts(ch);

return 0;

}
