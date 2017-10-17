#include<stdio.h>

void swap(int a[4][4])
{
	int i,j,temp;
	for (i=0;i<4;i++)
	{
		for(j=i;j<4;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}	
}

int main()
{
	int i,j;
	int a[4][4]={1,2,3,4,4,1,2,3,3,4,1,2,2,3,4,1};
	
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
