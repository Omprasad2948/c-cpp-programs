#include<stdio.h>
#include<conio.h>
int main(){
	int a[24],len,i,j,b[12],k=0,temp,end;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array element :\n");
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is:\n");
	for(i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\nThe array after Bunching is:\n");
	for(i=0;i<len;i=i+2){
		int sum=0;
		for(j=i+1;j<len;j++){
			sum=a[i]*10+a[j];
			b[k]=sum;
			k++;
			break;
		}
	}
	for(i=0;i<12;i++){
		printf("%d\t",b[i]);
	}
	int mid=len/2;
	end=(mid-1);
	printf("\nThe array after Reverse :\n");
	for(i=0;i<mid/2;i++){
		temp=b[i];
		b[i]=b[end];
		b[end]=temp;
		end--;
	}
	for(i=0;i<12;i++){
		printf("%d\t",b[i]);
	}
	printf("\nThe array after minus four from every intenger :\n");
	for(i=0;i<12;i++){
		b[i]=b[i]-4;
		printf("%d\t",b[i]);
	}
	printf("\nThe character is :\n");
	for(i=0;i<12;i++){
		printf("%c",b[i]);
	}
	
	return 0;
}
