#include<stdio.h>
int main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	b[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>1)
		{printf("%d ",i);
		flag=1;}
	}
	if(flag==0)
	printf("unique");
	
	
}
