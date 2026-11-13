/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:17:59 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 19:28:59 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	*stack = first->next;
	(*stack)->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
}

void	ra(t_list **a, c_operations *operation)
{
	rotate(a);
	if (operation->print)
		write(1, "ra\n", 3);
	else
		operations->ra++;
}

void	rb(t_list **b, c_operations *operation)
{
	rotate(b);
	if (operation->print)
		write(1, "rb\n", 3);
	else
		operations->rb++;
}

void	rr(t_list **a, t_list **b, c_operations *operation)
{
	rotate(a);
	rotate(b);
	if (operation->print)
		write(1, "rr\n", 3);
	else
		operations->rr++;
}
