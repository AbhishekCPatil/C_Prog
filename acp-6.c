#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Values of a & b after swap : a = %d, b = %d", a,b);
	return 0;
}