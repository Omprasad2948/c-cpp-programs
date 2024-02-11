#include<stdio.h>
#include<conio.h>
int main(){
	
	int i;
	printf("Enter the length of an array :\n");
	scanf("%d",&i);
	int a[i];
	int len=sizeof(a)/sizeof(a[0]);
	printf("Input The array:\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe Array is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	printf("\nThe Duck Number is :\n");
	for(i=0;i<len;i++){
//		int flag=1;
		int temp=a[i];
		while(temp!=0){
			int rem;
			rem=temp%10;
			if(rem==0){
//				flag==0;
			printf("The %d is duck number\n",a[i]);
				break;
			}
			temp=temp/10;
//				if(flag==1){
//		
//		}
		}
	
		
		
		
		
		
		
		
		
		
	}
	
	
	return 0;
}
