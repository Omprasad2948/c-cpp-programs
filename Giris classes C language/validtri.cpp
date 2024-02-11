#include<stdio.h>
#include<conio.h>
int main(){
	
	// check whether the the triangle is valid or not
	int a1,a2,a3;
	printf("Enter the angle1 :\n");
	scanf("%d",&a1);
	printf("Enter the angle2 :\n");
	scanf("%d",&a2);
	printf("Enter the angle3 :\n");
	scanf("%d",&a3);
	a1+a2+a3==180? printf("This is the valid triangle !"):printf("This is not the valid triangle !");
	return 0;
}
