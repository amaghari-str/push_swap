/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 19:19:39 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/19 03:20:00 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	non_flag(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] && (!ft_strncmp(argv[i], "--bench", 8)
			|| !ft_strncmp(argv[i], "--simple", 9)
			|| !ft_strncmp(argv[i], "--medium", 9)
			|| !ft_strncmp(argv[i], "--complex", 10)
			|| !ft_strncmp(argv[i], "--adaptive", 11)))
		i++;
	return (i);
}

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
		i++;
	}
	return (0);
}

int	parser(char **argv, t_operations *p)
{
	int	i;
	int	mode;

	i = 1;
	mode = 0;
	while (argv[i] && argv[i][0] == '-' && !ft_isdigit(argv[i][1]))
	{
		if (!ft_strncmp(argv[i], "--bench", 8) && !p->print)
			p->print = 1;
		else if (!ft_strncmp(argv[i], "--simple", 9))
			p->simple = ++mode;
		else if (!ft_strncmp(argv[i], "--medium", 9))
			p->medium = ++mode;
		else if (!ft_strncmp(argv[i], "--complex", 10))
			p->comple = ++mode;
		else if (!ft_strncmp(argv[i], "--adaptive", 11))
			mode++;
		else
			return (1);
		if (mode > 1)
			return (1);
		i++;
	}
	return (0);
}
