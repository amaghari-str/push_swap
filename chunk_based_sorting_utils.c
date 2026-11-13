/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_based_sorting_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 21:21:29 by hechahbo          #+#    #+#             */
/*   Updated: 2026/11/12 21:27:29 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing_stack(t_list *stack)
{
	int		count;
	t_list	*current;
	t_list	*compare;

	current = stack;
	while (current != NULL)
	{
		count = 0;
		compare = stack;
		while (compare != NULL)
		{
			if (current->value > compare->value)
				count++;
			compare = compare->next;
		}
		current->index = count;
		current = current->next;
	}
}

int	ft_sqrt(int nbr)
{
	int	i;

	i = 1;
	if (nbr <= 0)
		return (0);
	while (i * i <= nbr)
		i++;
	return (i - 1);
}

void	sorting_chunk(t_list **stack_a, t_list **stack_b, c_operations *p)
{
	int	size;
	int	chunk_size;
	int	limit;
	int	pushed;

	size = ft_lstsize(*stack_a);
	chunk_size = ft_sqrt(size);
	limit = chunk_size;
	pushed = 0;
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index < limit)
		{
			pb(stack_a, stack_b, p);
			pushed++;
			if ((*stack_b)->index < (limit - (chunk_size / 2)))
				rb(stack_b, p);
			if (pushed == limit)
				limit += chunk_size;
		}
		else
			ra(stack_a, p);
	}
}

int	find_next_position(t_list *stack)
{
	int	max_index;
	int	current_pos;
	int	max_pos;

	max_index = -1;
	current_pos = 0;
	max_pos = 0;
	while (stack != NULL)
	{
		if (stack->index > max_index)
		{
			max_pos = current_pos;
			max_index = stack->index;
		}
		current_pos++;
		stack = stack->next;
	}
	return (max_pos);
}

void	pushing_back_to_a(t_list **stack_a, t_list **stack_b, c_operations *p)
{
	int	pos;
	int	size;

	while (*stack_b != NULL)
	{
		size = ft_lstsize(*stack_b);
		pos = find_next_position(*stack_b);
		if (pos <= (size / 2))
		{
			while (pos > 0)
			{
				rb(stack_b, p);
				pos--;
			}
		}
		else
		{
			while (pos < size)
			{
				rrb(stack_b, p);
				pos++;
			}
		}
		pa(stack_a, stack_b, p);
	}
}
