#include<stdio.h>
int main()
{
	int n,a[15],i,x;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter X \n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[n-1]==x)
		{
			printf("the ans is -1\n");
			break;
		}
		else if(x<a[i])
		{
		if(a[i]==a[i+1]&&a[i]==a[i+2])
		{
			printf("ans is %d",(i+2));
			break;
		}
		else if((a[i]<a[i+1])||(a[i]==a[i+1]))
		{
			printf("%d",i);
		}
		
		
	}
	}
		
	return 0;
}
