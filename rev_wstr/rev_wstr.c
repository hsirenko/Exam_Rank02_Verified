#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int flag;
	int start = 0;
	int end = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t' ||  argv[1][i] == '\0')
				i--;
			end = i;
			while (argv[1][i] != ' ' && argv[1][i] != '\t' &&  argv[1][i] != '\0')
				i--;
			start = i + 1;
			flag = start;
			while (end >= start)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
