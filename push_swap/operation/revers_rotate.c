/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:21:40 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 19:28:30 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = ft_lstlast(*stack);
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = *stack;
	(*stack)->previous = last;
	*stack = last;
}

void	rra(t_list **a, c_operations *operation)
{
	reverse_rotate(a);
	if (operation->print)
		write(1, "rra\n", 3);
	else
		operations->rra++;
}

void	rrb(t_list **b, c_operations *operation)
{
	reverse_rotate(b);
	if (operation->print)
		write(1, "rrb\n", 3);
	else
		operations->rrb++;
}

void	rrr(t_list **a, t_list **b, c_operations *operation)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (operation->print)
		write(1, "rrr\n", 3);
	else
		operations->rrr++;
}
