#include<stdio.h>
void sequential()
{
	int a[20],flag,n,i,s;
	printf("\n Enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the data");
		scanf("%d",&a[i]);
	}
	printf("\n Enter the data for search");
	scanf("%d",&s);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("\n Data is found");
	else
	printf("\n Data is not found");
}
int main()
{
	sequential();
	return(1);
}
