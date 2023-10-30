#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char **argv)
{
	char *str = argv[1];
	unsigned int nb;
	unsigned int prime = 2;

	if (argc == 2)
	{
		nb = atoi(str);
		if (nb > INT_MAX)
		{
			printf("\n");
			return (0);
		}
		if (nb == 1)
			printf("1");
		while (nb >= prime)
		{
			if (nb % prime == 0)
			{
				nb = nb / prime;
				printf("%d", prime);
				prime -= 1;
				if (prime > nb)
				{
					printf("\n");
					return (0);
				}
				else
				printf("*");
			}
			prime++;
		}
	}
	printf("\n");
}
