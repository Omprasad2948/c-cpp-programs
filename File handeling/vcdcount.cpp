//Reading the data using getc function

#include<stdio.h>

int main(){
	
	FILE *ptr;
	ptr=fopen("D:\\File handeling\\om.txt","r");

	char ch;
	int vcount=0,dcount=0,ccount=0;
	
	do{
		
	ch=fgetc(ptr);
	
	if(ch==-1){
		break;
	}
	else if((ch>=65 && ch <=90)||(ch>=97 && ch<=122)){
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			vcount++;
		}
		else{
			ccount++;
		}
	}
	else if(ch>=48 && ch<=57){
		dcount++;
	}
	
		
	}while(1);
	printf("The number of vowel is %d\n",vcount);
	printf("The number of consonant is %d\n",ccount);
	printf("The number of digit is %d\n",dcount);
	fclose(ptr);
	
	return 0;
}
