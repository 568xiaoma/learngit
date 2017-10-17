#include<stdio.h>

void swap(int a[4][4])
{
	int i,j,temp;
	for (i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			temp=a[3-j][3-i];
			a[3-j][3-i]=a[i][j];
			a[i][j]=temp;
		}
	}	
}

int main()
{
	int i,j;
	int a[4][4]={1,2,3,4,2,3,4,1,3,4,1,2,4,1,2,3};
	
	printf("原数列为：\n");
	
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("倒数列为：\n");
	
	swap(a); 
	
		for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	getchar();
	return 0;
}
