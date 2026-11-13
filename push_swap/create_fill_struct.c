/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_fill_struct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:32:09 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 19:59:18 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>

int	ft_isintanse(char *argv, char t)
{
	int	i;

	i = 0;
	if (!argv)
		return (0);
	while (argv[i])
	{
		if (argv[i] == t)
			return (1);
	}
	return (0);
}

static void	fill(t_list **p, char **argv, int size)
{
	size_t	i;

	i = 0;
	while (i < (size_t)size)
	{
		p[i] = ft_calloc(sizeof(t_list), 1);
		p[i]->next = NULL;
		if (i == 0)
			p[i]->previous = NULL;
		else
			p[i]->previous = p[i - 1];
		if (i > 0)
			p[i - 1]->next = p[i];
		p[i++]->val = ft_atoi(*argv++);
	}
}

static t_list	**fill_split(char *arg)
{
	char	**split;
	t_list	**p;
	size_t	size;

	split = ft_split(arg, ' ');
	if (!split)
		return (NULL);
	size = 0;
	while (split[size])
		size++;
	p = ft_calloc(size, sizeof(t_list *));
	if (!p)
		return (free_split(split), NULL);
	fill(p, split, size);
	free_split(split);
	return (p);
}

t_list	**create_fill_struct(int argc, char **argv)
{
	size_t	i;
	size_t	size;
	t_list	**p;

	i = non_flags(argv);
	if (i >= (size_t)argc)
		return (NULL);
	if (ft_isintanse(argv[i], ' '))
		return (fill_split(argv[i]));
	size = argc - i;
	p = ft_calloc(size, sizeof(t_list *));
	if (!p)
		return (NULL);
	fill(p, &argv[i], size);
	return (p);
}
