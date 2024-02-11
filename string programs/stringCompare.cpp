#include<stdio.h>
#include<string.h>

int main(){
	int x,i=0,len1=0,len2=0;
	char ch1[50],ch2[50];
	printf("Enter the string1:\n");
	gets(ch1);
	_flushall();
	
	printf("Enter the string2:\n");
	gets(ch2);
	_flushall();
	
	while(ch1[i]!='\0'){
		len1++;
		i++;
	}
	
	for(i=0;ch2[i]!='\0';i++){
		len2++;
	}
	
	for(i=0;i<=len1 && i<=len2;i++){
		x=ch1[i]-ch2[i];
		if(x!=0){
			break;
		}
	}
	if(x>0){
		printf("%s is greater than %s\n",ch1,ch2);
	}
	else if(x<0){
		printf("%s is greater than %s\n",ch2,ch1);
	}else{
		printf("%s is same as %s\n",ch1,ch2);
	}
	
	return 0;
}
