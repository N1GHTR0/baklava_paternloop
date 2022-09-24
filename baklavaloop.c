#include <stdio.h>

int	mutlak(int x)
{
	if (x < 0)
	{
		x = -x;
	}
	return (x);
}

int main()
{
	int x;
	int y;
	int i;
	int j;

	printf("bir satı giriniz:");
	scanf("%d", &x);
	y = (x * 2) - 1;
	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= y)
		{
			if (mutlak(x - i) + mutlak(x - j) == x - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		j = 1;
		i++;
	}
	printf("\n");
}
