#include<stdio.h>
#include<conio.h>
int main(){
	
	int i=1,*ptr,n;
	printf("Enter the nth number :\n");
	scanf("%d",&n);
      
	for(i=0;i<=n;i++){
		ptr=&i;
		printf("%d\t",*ptr);
		ptr++;
	}
	
	
	return 0;
}
