#include<stdio.h>
#include<conio.h>
int main(){
	
	int days,yr,month;
	printf("Enter the total days :\n");
	scanf("%d",&days);
	while(days>30){
		
		
		
		yr=days/365;
		days=days%365;
		month=days/30;
		days=days%30;
}
	printf("The total years are %d\n",yr);
	printf("The total months are %d\n",month);
	printf("The remaining days are %d",days);
		
		
		return 0;
	 	

}
