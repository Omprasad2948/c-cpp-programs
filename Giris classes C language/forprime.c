#include<stdio.h>
#include<conio.h>
int main()
{
	int num,count,n,i;
	printf("Enter the nth number :\n");
	scanf("%d",&n);
	printf("The prime number upto nth is :\n");
	for(num=1;num<=n;num++){
		count=0;
		for(i=2;i<=(num/2);i++){
			if(num%i==0){
				count++;
			}
			
			}
			if(count==0 && num!=1){
				printf("%d\t",num);
				
		}
	}
}
