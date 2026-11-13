/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:12:23 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 19:06:30 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->previous = first;
	second->next = first;
	second->previous = NULL;
	first->previous = second;
	*stack = second;
}

void	sa(t_list **a, c_operations *operation)
{
	swap(a);
	if (operation->print)
		write(1, "sa\n", 3);
	else
		operations->sa++;
}

void	sb(t_list **b, c_operations *operation)
{
	swap(b);
	if (operation->print)
		write(1, "sb\n", 3);
	else
		operations->sb++;
}

void	ss(t_list **a, t_list **b, c_operations *operation)
{
	swap(a);
	swap(b);
	if (operation->print)
		write(1, "ss\n", 3);
	else
		operations->ss++;
}
