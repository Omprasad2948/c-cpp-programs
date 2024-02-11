#include<stdio.h>
#include<string.h>

int main(){
	
	
	char str1[20],str2[20];
	int i=0,j,len=0;
	printf("Enter the string :\n");
	gets(str1);
	                            
	while(str1[i]!='\0'){
		len++;
		i++;
	}
	for(i=0;i<=len;i++){
		str2[i]=str1[i];
	}
	printf("The given String is %s\n",str1);
	printf("The copy string is %s\n",str2);
	return 0;
}
