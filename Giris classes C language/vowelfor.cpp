#include<stdio.h>
#include<conio.h>
int main(){
	
		printf("\nThis is vowel:\n\n");
	for(int i=1;i<=255;i++){
		if((i>=65&&i<=90)||(i>=97&&i<=122))
		{
			if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
			{
				printf("%c\t",i);
			}
		}
	}
	printf("\n\nThis is consonant\n\n");
		for(int i=1;i<=255;i++){
		if((i>=65&&i<=90)||(i>=97&&i<=122))
		{
			if(i!='a'&&i!='e'&&i!='i'&&i!='o'&&i!='u'&&i!='A'&&i!='E'&&i!='I'&&i!='O'&&i!='U')
			{
				printf("%c\t",i);
			}
		}
	}
	return 0;
}
