

#include<stdio.h>
#include<conio.h>
int main(){
	// find the value in array present or not
	
	int a[5],len,flag=0,skey,i;
	printf("Enter the array value:\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);		
	}
	printf("Enter the value to find in array :\n");
	scanf("%d",&skey);
	for(i=0;i<len;i++){
		if(a[i]==skey){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Value Found\n");
	}
	else{
		printf("Value not Found\n");
	}
	
	
	
	
	return 0;
}
