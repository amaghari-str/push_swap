/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LSD_Radix_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 20:20:20 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/17 21:29:53 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	calc_rotations(t_stack *stack)
{
	int	max_bits;
	int	max_index;

	max_bits = 0;
	max_index = 0;
	while (stack)
	{
		if (stack->index > max_index)
		{
			max_index = stack->index;
		}
		stack = stack->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b, int size,
t_operations *p)
{
	int	i;
	int	j;
	int	rotations;

	rotations = calc_rotations(*stack_a);
	i = 0;
	while (i < rotations)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a, p);
			else
				pb(stack_a, stack_b, p);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b, p);
		i++;
	}
}
