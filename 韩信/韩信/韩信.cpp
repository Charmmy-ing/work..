#include<stdio.h>
int main()
{
	int max;
	printf("max=");
	scanf_s("%d", &max);
	int number;
	for (number = 1; number <=max; ++number)
	{
		if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2)
		{
			printf("%d\n", number);
		}
	}
	
	return 0;
}