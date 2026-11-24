/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:21:40 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/19 21:00:43 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	last = ftt_lstlast(*stack);
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = *stack;
	(*stack)->previous = last;
	*stack = last;
	return (1);
}

void	rra(t_stack **a, t_operations *p)
{
	if (!reverse_rotate(a))
		return ;
	if (!p->print)
		write(1, "rra\n", 4);
	p->rra++;
}

void	rrb(t_stack **b, t_operations *p)
{
	if (!reverse_rotate(b))
		return ;
	if (!p->print)
		write(1, "rrb\n", 4);
	p->rrb++;
}

void	rrr(t_stack **a, t_stack **b, t_operations *p)
{
	int	moved;

	moved = reverse_rotate(a);
	moved |= reverse_rotate(b);
	if (!moved)
		return ;
	if (!p->print)
		write(1, "rrr\n", 4);
	p->rrr++;
}
