//Expected Output:
//The given array is:
//5 2 3 7 6 4 9 8
//The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
//Number of distinct pairs for difference 5 are: 3
#include<stdio.h>
#include<conio.h>
int main(){
	int a[8],i,len,j;
	printf("Enter the element in array :\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe arrays is :\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
		for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(a[i]>a[j]){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

		for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(a[j]-a[i]==5){
			printf("\n(%d %d)\n",a[j],a[i]);
		}
	}
}
	
	return 0;
}
