#include<stdio.h>
#include<conio.h>
int main(){
  int num,n,i,fact=1,sum=0;
  printf("Enter the number :\n");
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
  	fact=fact*i;
  }
  printf("\nThe factorial is %d\n",fact);
	for(n=1;n<=fact;n++){
		int count=0;
		
		for(int j=2;j<n;j++){
			if(n%j==0){
				count++;
				break;
			}
			}
			if(count==0 && n!=1){
				printf("%d ",n);
				sum=sum+n;
		}
		
	}
	printf("\nThe sum is %d",sum);

}
