#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[10],i=0;
	
	// Taking input in array 
	for(i=0;i<=9;i++)
	{
		printf("Enter %d value number",i+1);	
		scanf("%d",&marks[i]);
	}

	//Display 7th value
	printf("The 7th value is %d",marks[6]);


	// Display output whole array
	for(i=0;i<=9;i++)
	{
		printf("\nThe %d position element is %d",i+1,marks[i]);
	}

	getch();
	return 0;
}

