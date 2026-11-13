/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:15:35 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 19:06:50 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->previous = NULL;
	tmp->next = *dst;
	if (*dst)
		(*dst)->previous = tmp;
	tmp->previous = NULL;
	*dst = tmp;
}

void	pa(t_list **a, t_list **b, c_operation *operation)
{
	push(b, a);
	if (operation->print)
		write(1, "pa\n", 3);
	else
		operations->pa++;
}

void	pb(t_list **a, t_list **b, c_operations *operation)
{
	push(a, b);
	if (operation->print)
		write(1, "pb\n", 3);
	else
		operations->pb++;
}
