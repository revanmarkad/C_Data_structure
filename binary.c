#include<stdio.h>
void binary()
{
	int a[20],flag,n,i,s,start,end,mid;
	printf("\n Enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the data in sorted order");
		scanf("%d",&a[i]);
	}
	printf("\n Enter the data for search");
	scanf("%d",&s);
	flag=0;
	for(start=0,end=n-1;start<=end;)
	{
		mid=(start+end)/2;
		if(a[mid]==s)
		{
			flag=1;
			break;
		}
		else
		if(s>a[mid])
		start=mid+1;
		else
		end=mid-1;
	}

	if(flag==1)
	printf("\n Data is found");
	else
	printf("\n Data is not found");
}
int main()
{
	binary();
	return(1);
}
