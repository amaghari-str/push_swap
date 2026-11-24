/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algoritm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:22:25 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/24 19:18:01 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min_position(t_stack *lst)
{
	int	min;
	int	pos;
	int	i;

	min = lst->val;
	pos = 0;
	i = 0;
	while (lst)
	{
		if (lst->val < min)
		{
			min = lst->val;
			pos = i;
		}
		i++;
		lst = lst->next;
	}
	return (pos);
}

int	is_sorted(t_stack *lst)
{
	while (lst && lst->next)
	{
		if (lst->val > lst->next->val)
			return (0);
		lst = lst->next;
	}
	return (1);
}

static void	bring_to_top(t_stack **a, int pos, int size, t_operations *p)
{
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(a, p);
	}
	else
	{
		while (pos++ < size)
			rra(a, p);
	}
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	simple_sort(t_stack **a, t_stack **b, t_operations *p)
{
	int	size;

	while (*a && !is_sorted(*a))
	{
		size = stack_size(*a);
		bring_to_top(a, min_position(*a), size, p);
		pb(a, b, p);
	}
	while (*b)
		pa(a, b, p);
}
