#include<stdio.h>

void swap(int *x,int *y);

void swap(int *x,int *y)
{
	int p=*y;
	*y=*x;
	*x=p;
}

int main()
{
	int n;
	printf("请输入总元素个数：");
	scanf("%d",&n); 
	
	int a[n];
	int i,o,j;
	
	for (i=0;i<n;i++)
	{
		printf("请输入第%d个元素：",i+1);
		scanf("%d",&a[i]);
		getchar();
	} 
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]>a[i+1])
				{
				o=a[i];				
				a[i]=a[i+1];
				a[i+1]=o;
				}
		}
	} 
	

	printf("由小到大排序为：\n"); 
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getchar(); 
	for(i=0;i<n/2;i++)
	{
		swap(&a[i],&a[n-1-i]);
	}
	
	printf("\n由大到小排序为\n");
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	getchar();
	return 0;
}
