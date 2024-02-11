#include<stdio.h>
#include<conio.h>
int main(){
	
int a,b,c;
 printf("Enter the first number :\n");
 scanf("%d",&a);

printf("Enter the second number :\n");
scanf("%d",&b);

printf("Enter the third number :\n");
scanf("%d",&c);

if(a>b&&a>c){
	printf("The first number is greater than second and third ");
}
else if(b>a&&b>c){
	printf("The second number is greater than first and second ");
}
else{
	printf("The third number is greater than first and second ");
}



 return 0;
}
