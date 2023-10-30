#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int nbr = 0;

	while (*s)
	{
		nbr = nbr * 10 + *s++ - '0';
	}
	return (nbr);
}

void ft_putnbr(int nbr)
{
	char digit = 0;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int is_prime(int nb)
{
	int i = 2;
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int new_num = 0;;
	int given_num = 0;

	//printf("prime %d\n", is_prime(1));
	if (argc == 2)
	{
		given_num = ft_atoi(&argv[1][i]);
		while (given_num > 1)
		{
			if (is_prime(given_num))
				new_num += given_num;
			//printf("new_num: %d\n", new_num);
			given_num--;

		}
		//printf("new_num: %d\n", new_num);
		ft_putnbr(new_num);
	}
	else
	write(1, "0", 1);
	write(1, "\n", 1);
}