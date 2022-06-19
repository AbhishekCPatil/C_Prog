#include <stdio.h>
int main()
{
	int p,t,r;
	float  si;
	
	printf("Enter Principal : ");
	scanf("%d",&p);
	printf("Enter Time(Year) : ");
	scanf("%d",&t);
	printf("Enter rate of interest : ");
	scanf("%d", &r);
	
	si=(float)p*t*r/100;
	printf("Simple interest = %f", si);
	
	return 0;
}