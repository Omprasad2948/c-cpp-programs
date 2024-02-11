#include<stdio.h>
#include<conio.h>
int main(){
	int a[6],i,len,j,temp;
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
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
	int first=a[0],last=a[len-1];
	printf("\n\nThe maximum difference is %d\n",last-first);
	
	return 0;
}
