#include<stdio.h>
#include<conio.h>
int main(){
	int voltage , current , resistance;
	printf("\nEnter the value of voltage :");
	scanf("%d",&voltage);
	printf("\nEnter the value of current :");
	scanf("%d",&current);
	resistance = voltage/current;
	printf("\nThe Resistance is is %d",resistance);
	
	return 0;
}
