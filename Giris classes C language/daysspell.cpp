#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("Enter the num for spelling :\n");
	scanf("%d",&num);
	
	switch(num){
		
		case 1:
			printf("Sunday");
			break;
	    case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednsday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
				
		
	}
	
	
	
	return 0;
}
