/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 13:11:56 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/08 13:54:19 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	sa(t_list **a)
{
	swap(a);
}

void	sb(t_list **b)
{
	swap(b);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
}

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

void	pa(t_list **a, t_list **b)
{
	push(b, a);
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
}

static void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;

	first = *stack;
	last = *stack;

	while (last->next)
		last = last->next;

	*stack = first->next;
	(*stack)->previous = NULL;

	last->next = first;
	first->previous = last;
	first->next = NULL;
}

void	ra(t_list **a)
{
	rotate(a);
}

void	rb(t_list **b)
{
	rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
}

static void	reverse_rotate(t_list **stack)
{
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;

	last = *stack;
	while (last->next)
		last = last->next;

	last->previous->next = NULL;

	last->previous = NULL;
	last->next = *stack;

	(*stack)->previous = last;
	*stack = last;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
