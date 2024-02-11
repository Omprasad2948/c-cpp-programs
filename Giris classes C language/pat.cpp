 #include<stdio.h>
 #include<conio.h>
 int main(){
 	
 	int num,start,end,size;
	printf("\nEnter the number :");
	scanf("%d",&num);
	start=0;
	size=num*2-1;
	end=size-1;
	int a[size][size];
	while(num!=0){
	for(int i=start;i<=end;i++){
		for(int j=start;j<=end;j++){
			if(i==start||i==end||j==start||j==end){
				a[i][j]=num;
			}
			
		}
	}
		start++;
		end--;
		num--;
}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
 	
 	
 	return 0;
 }
