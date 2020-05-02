#include <stdio.h>

int main()
{
	int muge[] = { 45, 12, 55, 92, 2456, 1, 0, 10, 5, 2 }, i, sum = 0, take;
	for ( i = 0; i < sizeof(muge)/sizeof(int); i++)
	{
		sum += muge[i];
	}
	printf("Average:%d\tArray width:%d\n", sum / (sizeof(muge) / sizeof(int)), sizeof(muge) / sizeof(int));
	printf("Enter a number:");
	scanf_s(" %d", &take);
	for (i = 0; i < sizeof(muge) / sizeof(int); i++)
	{
		if (take == muge[i])
		{
			break;
		}
	}
	if (i < sizeof(muge) / sizeof(int))
	{
		printf("Your number exists in the array! The indices that your number stands: a[%d]\n", i);
	}
	else
	{
		printf("Sorry this number doesn't exist!\n");
	}

}
