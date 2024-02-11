#include<stdio.h>
int main()
{
	int num=1;
	int sum=4;
	int count=1;
	int temp=0;
	for(int i=0;i<5;i++)
	{
		count=1;
		sum=4;
		for(int j=0;j<5;j++)
		{
//			printf(" * ");
			if(j>=4-i)
			{
				if(count>1)
				{
						printf("%d",num+sum);
						--sum;
				}
				else
				{
						printf("%d",num);
							count;
				}
						
			}else
			{
				printf(" ");
			}
		}
		
		printf("\n");
			++num;
	}
}
