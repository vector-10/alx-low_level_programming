#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long long int i, j, k, l;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 218922995834555169026)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		l = j + k;
		j = k;
		k = l;
	}
	return (0);
}
