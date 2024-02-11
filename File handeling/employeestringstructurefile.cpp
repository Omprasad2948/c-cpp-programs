#include<stdio.h>
#include<string.h>
struct book{
	int bid,bprice;
	char bname[90],bauthour[90];
};
int main(){
	struct book b;
    FILE *ptr;
    ptr=fopen("D:\\File handeling\\books.txt","a");
    printf("Enter the data in the structure :\n");

		scanf("%d%s%d%d",&b.bid,&b.bname,&b.bauthour,&b.bprice);
        fprintf(ptr,"%d\t%s\t%s\t%d\n",b.bid,b.bname,b.bauthour,b.bprice);
		//fputs("\n",ptr);
	
		
		fclose(ptr);
	return 0;
}
