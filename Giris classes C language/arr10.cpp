#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[5],len,i;
	//length of array
	len=sizeof(a)/sizeof(a[0]);
	
	// initiaization of array
	printf("Initialize th Array :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	//declaration of Array
	printf("\nArray is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	
	printf("\nThe prime number in the Array :\n");
	
	for(i=0;i<len;i++){
		int flag=0;
		for(int j=2;j<a[i];j++){
		if(a[i]%j==0){
		 flag=1;
		}
	}
	if(flag==0 && a[i]!=1 ){
			printf("%d\t",a[i]);
	}
	}
	
	
	return 0;
}
