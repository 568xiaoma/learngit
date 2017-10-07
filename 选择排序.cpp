#include<stdio.h>

int main()
{
	int n; 
	
	printf("请输入元素个数：");
	scanf("%d",&n);
	
	int a[n];
	int x,i,j; 
	
	for(i=0;i<n;i++)
	{
	printf("请输入第%d个元素：",i+1);
	scanf("%d",&a[i]);
	getchar();
	}
	for (i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			x=a[i];				
			a[i]=a[j];
			a[j]=x;
			}
		}
	}
	printf("从从小到大排序为：\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
 	getchar();
	return 0;
}
	
