#include<stdio.h>
#include<string.h>

int main(){
	int i=0,count=0,count1=0;
	char ch[50];
	printf("Enter the string:\n");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++){
		if((ch[i]>=65 && ch[i]<=90)||(ch[i]>=97 && ch[i]<=122)){
			if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'
			||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'
			||ch[i]=='O'||ch[i]=='U'){
				count++;
			}
			else{
				count1++;
			}
		}
	}
	printf("There are %d vowels  in string\n",count);
	printf("There are %d consonant  in string\n",count1);
	
	return 0;
}
