#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2,d;
	printf("Enter the value of x1 :\n");
	scanf("%lf",&x1);
	
	printf("Enter the value of x2 :\n");
	scanf("%lf",&x2);
	
	printf("Enter the value of y1 :\n");
	scanf("%lf",&y1);
	
	printf("Enter the value of y2 :\n");
    scanf("%lf",&y2);
    
    d=(sqrt(pow((x2-x1),2))+pow((y2-y1),2));
    printf("The distance of graph point is %f",d);
	
	
	
	
	
	return 0;
}
