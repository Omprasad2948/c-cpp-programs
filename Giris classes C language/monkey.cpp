#include<stdio.h>
#include<conio.h>
int main(){
	
	/*
	
Where, n= Total no of Monkeys
 k= Number of eatable Bananas by Single Monkey (Monkey that jumped
down last may get less than k Bananas)
 j = Number of eatable Peanuts by single Monkey(Monkey that jumped
down last may get less than j Peanuts)
 m = Total number of Bananas
 p = Total number of Peanuts
Remember that the Monkeys always eat Bananas and Peanuts, so there is no
possibility of k and j having a value zero
	
	*/

	float atebanana=0.0,atepenaut=0.0;
	int n,k,j,m,p;
	printf("Enter the number of monkeys \n");
	scanf("%d",&n);
	
	printf("Total number of bananas\n");
	scanf("%d",&m);
		
	printf("Total number of penauts\n");
	scanf("%d",&p);
	
	printf("Number of eatable banana\n");
	scanf("%d",&k);
		
	printf("number of eatable penauuts\n");
	scanf("%d",&j);
		
	if(n<0 || m<0 || p<0 || k<0 || j<0){
		printf("Invalid input");
		
	}
	else{
		if(k>0){
			atebanana=float(m/k);
		}
		if(j>0){
			atepenaut=float(p/j);
		}
		n=n-atebanana-atepenaut;
		printf("The total monkeys remaining are %d",n);
	}
	
		
	
	return 0;
}
