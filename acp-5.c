#include <stdio.h>
int main()
{
	int a,b,t;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("Values of a & b after swap : a=%d,b=%d", a,b);
	return 0;
}