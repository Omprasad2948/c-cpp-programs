#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	int a,b;
	printf("Enter the value of a :\n");
	scanf("%d",&a);
	printf("Enter the va;ue of b :"\n);
	scanf("%d",&b);
	pow((a+b),2)==pow(a,2)+2*a*b+(pow(b,2))?printf("Test pass"):printf("test failed");
	
	
	return 0;
}
