#include<stdio.h>
#include<math.h>

void nthperfectNum(int num){
	for(int j=1;j<=num;j++){
		int sum=0;
	for(int i=1;i<j;i++){
		if(j%i==0){
			sum=sum+i;
		}
	}
	if(sum==j){
		printf("%d\t",j);
	}
	}
	
}
int main(){
	printf("Enter the number :\n");
	int num;
	scanf("%d",&num);
	nthperfectNum(num);
	
	return 0;
}
