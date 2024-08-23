#include <stdio.h>
int main()
{
	int a[10],prime[10],i=0,j=0,k=0,count=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter a[%d] number: ",i);
		scanf("%d",&a);
	}
	for(i=0;i<=9;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			prime[k]=a[i];
			k++;
		}
		count=0;
	}
	printf("\n Prime numbers are: ");
	for(i=0;i<k;i++)
	{
		printf("\t %d",&prime[i]);
		
	}
	return 0;
}
