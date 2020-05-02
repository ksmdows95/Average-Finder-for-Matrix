#include <stdio.h>

int main()
{
	int muge[] = { 45, 12, 55, 92, 2456, 1, 0, 10, 5, 2 }, i, sum = 0, take;
	for ( i = 0; i < sizeof(muge)/sizeof(int); i++)
	{
		sum += muge[i];
	}
	printf("Ortalama:%d\tDizi genisligi:%d\n", sum / (sizeof(muge) / sizeof(int)), sizeof(muge) / sizeof(int));
	printf("Bir sayi girin:");
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
		printf("Sayiniz dizide mevcut! Sayinizin buludugu indis: a[%d]\n", i);
	}
	else
	{
		printf("Uzgunum sayiniz mevcut degil!\n");
	}

}