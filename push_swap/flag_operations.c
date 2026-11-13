#include "push_swap.h"

int non_flag(char **argv)
{
	int	i;

	i = 1;
	if (ft_strcmp(argv[i], "--bench"))
		i++;
	if (ft_strcmp(argv[i], "--simple") || ft_strcmp(argv[i], "--medium") || ft_strcmp(argv[i], "--complex") || ft_strcmp(argv[i], "--adaptive"))
		i++;
	return (i);
}

