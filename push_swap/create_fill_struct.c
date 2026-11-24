/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_fill_struct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:32:09 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/24 18:57:35 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>
/*
static void	free_nodes(t_stack **nodes, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(nodes[i]);
		i++;
	}
}
*/
int	is_nomber(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && !(ft_atoi(argv[i]) * 1))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	fill(t_stack **p, char **argv, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		p[i] = ft_calloc(1, sizeof(t_stack));
		p[i]->val = ft_atoi(argv[i]);
		if (i > 0)
		{
			p[i]->previous = p[i - 1];
			p[i - 1]->next = p[i];
		}
		if (!p[i] || !is_nomber(&argv[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

static void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static t_stack	**fill_split(char *arg)
{
	char	**split;
	t_stack	**p;
	size_t	size;

	split = ft_split(arg, ' ');
	if (!split)
		return (NULL);
	size = 0;
	while (split[size])
		size++;
	if (size == 0)
		return (free_split(split), NULL);
	p = ft_calloc(size, sizeof(t_stack *));
	if (!p)
		return (free_split(split), NULL);
	if (!fill(p, split, size))
	{
		free(p);
		free_split(split);
		return (NULL);
	}
	free_split(split);
	return (p);
}

t_stack	**create_fill_struct(int argc, char **argv, t_operations *bench)
{
	size_t	i;
	size_t	size;
	t_stack	**p;

	i = (size_t)non_flag(argv);
	if (i >= (size_t)argc)
		return (NULL);
	if (ft_isintanse(argv[i], ' '))
		return (fill_split(argv[i]));
	size = (size_t)argc - i;
	p = ft_calloc(size, sizeof(t_stack *));
	if (!p)
		return (NULL);
	if (!fill(p, &argv[i], size))
	{
		free_sta_a(p, bench);
		return (NULL);
	}
	return (p);
}
