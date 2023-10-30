#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int wc = 0;
	int start = 0;
	int end = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	//printf("wc: %d\n", wc);
	char **result = (char **)malloc(sizeof(char *) * (wc + 1));
	while (str[end])
	{
		while (str[end] && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'))
			end++;
		//printf("I'm here\n");
		start = end;
		while (str[end] && (str[end] != ' ' && str[end] != '\t' && str[end] != '\n'))
			end++;
		if (end > start)
		{
			result[j] = malloc(sizeof(char *) * ((end - start) + 1));
			while (result[j])
			{
				ft_strncpy(result[j], &str[start], end - start);
				j++;
			}
		}
	}
	result[j] = NULL;
	return(result);
}

//int main()
//{
////	char *s1 = "copy me";
////	char s2[7];
////	int n = 7;
////	char *result = ft_strncpy(s1, s2, 7);
////	printf("copied: %s\n", result);
////	printf("s1: %s\n", s1);
////	printf("s2: %s\n", s1);
//	char *str = "String to be split";
//	int i = 0;
//
//	char **result = ft_split(str);
//
//
//	while (result[i])
//	{
//		printf("Word %d: %s\n", i, result[i]);
//		free(result[i]);
//		i++;
//	}
//	free(result);
//}