#include<stdio.h>
#include<conio.h>
int main(){
	
	char ch;
	printf("Enter the indian casses notes : ");
	scanf("%c",&ch);
	switch(ch){
		case 'c':
			printf("for indian notes Sa\n");
			printf("The western notes is Do\n");
			break;
		case 'd':
			printf("for indian notes Re\n");
			printf("The western notes is Re\n");
			break;
		case 'e':
			printf("for indian notes Ga\n");
			printf("The western notes is Mi\n");
			break;
		case 'f':
			printf("for indian notes Ma\n");
			printf("The western notes is Fa\n");
			break;
		case 'g':
			printf("for indian notes Pa\n");
			printf("The western notes is So\n");
			break;
		case 'a':
			printf("for indian notes Dha\n");
			printf("The western notes is Do\n");
			break;
		case 'b':
			printf("for indian notes Ni\n");
			printf("The western notes is Ti\n");
			break;
		default:
		printf("The invalid notes");
		break;		
		
	}
	
	
	
	return 0;
}
