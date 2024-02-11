#include<stdio.h>
#include<conio.h>
int main(){
	//nested for loops  means loops in loop
	//the nested loop works for the matrix
	//the outer loop is worked for row and the inner loop work for column
	int n;
	printf("Enter the number which you want to print 3*3 matrix format :\n");
	scanf("%d",&n);
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			printf("%d ",n);
		}
		printf("\n");
	}
	
	
	return 0;
}
