#include<stdio.h>
#include<conio.h>
int main()
{
	int f=1,end,*ptr,*fact;
	printf("Enter the number two print the factorial :\n");
	scanf("%d",&end);
	ptr=&end;
	fact=&f;
	for(int i=1;i<=*ptr;i++){
		*fact=*fact*i;
	}
	
	printf("The factorial value is %d",*fact);
	
	
	
	return 0;
}
