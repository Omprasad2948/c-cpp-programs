#include<stdio.h>
#include<conio.h>
int main(){
	
	float density,distance;
	printf("Enter the Distance of Earth :\n");
	scanf("%f",&distance);
	
	printf("Enter the density of Earth");
	scanf("%f",&density);
	  if((distance>=0 && distance<=100) && (density>=0 && density <=2.8)){
	  	printf("This is the crust layer of the earth !");
	  	
	  }
	  else if((distance>100 && distance<=2900) && (density>2.8 && density <=4.6)){
	  	printf("This is the mantle layer of the earth !");
	  	
	  }
	  else if((distance>2900 && distance<=5100) && (density>4.6 && density <=10.5)){
	  	printf("This is the outer core layer of the earth !");
	  	
	  }
	  else if((distance>5100 && distance<=6400) && (density>10.5)){
	  	printf("This is the Inner core layer of the earth !");
	  	
	  }
	
	
	return 0;
}
