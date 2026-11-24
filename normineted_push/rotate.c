/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:17:59 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/19 21:01:02 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	first = *stack;
	last = ftt_lstlast(*stack);
	*stack = first->next;
	(*stack)->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
	return (1);
}

void	ra(t_stack **a, t_operations *p)
{
	if (!rotate(a))
		return ;
	if (!p->print)
		write(1, "ra\n", 3);
	p->ra++;
}

void	rb(t_stack **b, t_operations *p)
{
	if (!rotate(b))
		return ;
	if (!p->print)
		write(1, "rb\n", 3);
	p->rb++;
}

void	rr(t_stack **a, t_stack **b, t_operations *p)
{
	int	moved;

	moved = rotate(a);
	moved |= rotate(b);
	if (!moved)
		return ;
	if (!p->print)
		write(1, "rr\n", 3);
	p->rr++;
}
