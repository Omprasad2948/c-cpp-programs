#include<stdio.h>
#include<conio.h>	
	int main(){
	int i;
	printf("Enter the length of an Array :\n");
	scanf("%d",&i);
	int a[i];
	int len= sizeof(a)/sizeof(a[0]);
	
	printf("Enter The Array :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe Array is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nAfter shifting ;\n");
	for(int i=0;i<5;i++){
		for(int j(i+1);j<5;j++){
			if(a[i]%2==0){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
