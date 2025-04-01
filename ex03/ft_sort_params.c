#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

/* Selection Sort */
int	main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;
	int		min;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc - 1)
	{
		min = i;
		j = i + 1;
		while (j < argc)
		{
			if (strcmp(argv[j], argv[min]) < 0)
				min = j;
			j++;
		}
		if (min != i)
		{
			tmp = argv[i];
			argv[i] = argv[min];
			argv[min] = tmp;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}

/* Bubble Sort */
int	main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
