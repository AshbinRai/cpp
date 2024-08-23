#include<stdio.h>
int main()
{

	int i=0,j=0,k=0;
	
	for(i=1;i<=5;i++)    // row select=i
	{
	

		for(k=i;k<=4;k++)   // space print=k
		{
			printf(" ");
		}
		

		for(j=1;j<=i;j++)   // content print=j
		{
			printf("*"); 
		}

		printf("\n");
	}
return 0;
}	
