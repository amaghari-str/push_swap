/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:01:46 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/24 18:58:38 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_sta_a(t_stack **p, t_operations *bench)
{
	t_stack	*temp;

	if (bench)
		free(bench);
	while (*p != NULL)
	{
		temp = (*p)->next;
		free(*p);
		*p = temp;
	}
	free(p);
}

static int	check_duplicates(t_stack *stack)
{
	t_stack	*current;
	t_stack	*compare;

	current = stack;
	while (current != NULL)
	{
		compare = current->next;
		while (compare != NULL)
		{
			if (compare->val == current->val)
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack			**p;
	t_stack			*b;
	t_operations	*bench;

	if (argc < 2)
		return (1);
	bench = ft_calloc(1, sizeof(*bench));
	p = create_fill_struct(argc, argv, bench);
	if (!p || !bench || check_duplicates(*p))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (parser(argv, bench))
	{
		free_sta_a(p, bench);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	b = NULL;
	disorder(p, &b, bench);
	free_sta_a(p, bench);
	return (0);
}
