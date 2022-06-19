#include <stdio.h>
int main()
{
	float r, a, c;
	
	printf("Enter radius : ");
	scanf("%f",&r);
	a = 3.142*r*r;
	c = 2*3.142*r;
	printf("Area is = %f\n", a);
	printf("Circumference is : %f\n", c);
	return 0;
	
}