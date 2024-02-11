#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	printf("Enter the string :\n");
	char ch[50],str[50];
	gets(ch);
	int j=0;
	strrev(ch);
	printf("%s\n",ch);
	for(int i=0;ch[i]!='\0';i++){
	  str[j]=ch[i];
	   j++;
      if(ch[i]=' '){
      	str[j]='\0';
      	strrev(str);
      	printf("%s",str); 
      	j=0;
      		
	  } 
	  
	   
	}
	
	
	return 0;
}
//my name is khan
