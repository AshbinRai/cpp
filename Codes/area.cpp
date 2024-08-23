#include <stdio.h>
int main()
{
	const float pi=3.14;
	float area=0,r=0;
	printf("enter the redius: ");
	scanf("%f",&r);
	area=2*pi*r;
	printf("the area of circle is:%.3f",area);
	return 0;
}
