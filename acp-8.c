#include <stdio.h>
int main()
{
	int a, b;
	
	printf("Enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	if(a > b)
			printf("%d is big", a);
	else
			printf("%d is big", b);
	return 0;
}