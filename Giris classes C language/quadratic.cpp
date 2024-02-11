#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	int a,b,c,d,roots,roots2;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	

	d=sqrt(b*b-4*a*c);
	if(d>0){
		roots=(-b+d)/(2*a);
		printf("The roots is : %d\n",roots);
		roots2=(-b-d)/(2*a);
		printf("The roots is : %d\n",roots2);
		
	}
	else if(d==0){
		roots=-b/(2*a);
		printf("The roots is : %d\n",roots);
	}
	else{
		printf("Imaginary number");
	}
	
	
	
	
	
	
	return 0;
}
