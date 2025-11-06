#include<stdio.h>
int main()
{
	int n1, n2;
	char o;
	float a;
	
	printf("enter :");
	scanf_s("%d%d%c", &n1, &n2, &o);
	if (o == '+')
	{
		a =n1 + n2;
	}
	else
	{
		if (o == '-')

		{
			a =n1 - n2;
		}
		else
		{
			a=n1 * n2;

		}
	}
	printf("ANS: %f",a);
	return 0;
}
