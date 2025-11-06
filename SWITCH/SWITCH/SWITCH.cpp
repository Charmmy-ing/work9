#include<stdio.h>
int main()
{
	int a;
	printf("ID:");
	scanf_s("%d", &a);
	switch(a)//变量a
	{
	case 2://情况为2时
		printf("John");
		break;
	case 13:
		printf("Mary");
		break;
	default://默认feze
		printf("no found");
	}
	return 0;
}