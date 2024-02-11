#include<stdio.h>
#include<conio.h>
int main(){
	
	int i=1,*ptr,n;
	printf("Enter the nth number :\n");
	scanf("%d",&n);
      ptr=&n;
	for(i=0;i<=*ptr;i++){
		
		printf("%d\t",i);
	
	}
	
	
	return 0;
}
