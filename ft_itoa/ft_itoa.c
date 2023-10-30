#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int nbr)
{
	if (nbr == INT_MAX)
		return ("2147483647\n");
	if (nbr == INT_MIN)
		return ("-2147483648\n");

	int len = 0;
	int n = nbr;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		len++;
		n /= 10;
	}
	//printf("len %d\n", len);

	char *str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';

	if (nbr == 0)
	{
		*str = '0';
		return (str);
	}

	if (nbr <= 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}

	while (nbr)
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return(str);
}

//char	*ft_itoa(int nbr)
//{
//	if (nbr == INT_MAX)
//		return("2147483647\n");
//	if (nbr == INT_MIN)
//		return("-2147483648\n");
//
//	int len = 0;
//	int n = nbr;
//
//	if (n <= 0)
//		len++;
//		n = -n;
//
//	while (n > 0)
//	{
//		len++;
//		n = n / 10;
//	}
//	//printf("len: %d\n", len);
//
//	char *str = malloc(sizeof(char) * len + 1);
//	if (str == NULL)
//		return (NULL);
//	str[len] = '\0';
//
//	if (nbr == 0)
//	{
//		*str = '0';
//		return (str);
//	}
//
//	if (nbr <= 0)
//	{
//		str[0] = '-';
//		nbr = -nbr;
//	}
//
//	while (nbr)
//	{
//		str[--len] = nbr % 10 + '0';
//		nbr /= 10;
//	}
//	return (str);
//}
//
//int main()
//{
//	int nbr = -1557;
//	char *result = ft_itoa(nbr);
//	printf("%s\n", result);
//	//printf("%d\n", INT_MAX);
//	//printf("%d\n", INT_MIN);
//}
