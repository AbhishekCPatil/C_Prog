#include <stdio.h>
int main()
{
	int a, b;
	
	printf("Enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	if(a != b)
		{
			if(a > b)
				printf("%d is bigger", a);
			else
				printf("%d is bigger", b);
		}
	else
		printf("Please enter a different number");
	return 0;
}