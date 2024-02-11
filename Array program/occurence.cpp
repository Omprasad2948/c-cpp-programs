#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[5],i,len;
	printf("Enter the array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe Array after ascending order is :\n ");
	for(i=0;i<len;i++){
		for(int j=(i+1);j<len;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	int count=1;
	for(i=0;i<len;i++){
			
		
		if(a[i]==a[i+1]){
			count++;
		}
		else{
			printf("\n%d at %d time\n",a[i],count);
			count=1;
				
		}
	}
	

	return 0;
}
