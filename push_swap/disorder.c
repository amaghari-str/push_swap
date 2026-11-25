/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 19:39:28 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/24 20:39:32 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    sort_three(t_stack **a, t_operations *p)
{
    int first;
    int second;
    int third;


    first = (*a)->val;
	second = (*a)->next->val;
    third = (*a)->next->next->val;

    if (first > second && second < third && first < third)
        sa(a, p);
    else if (first > second && second > third)
    {
        sa(a, p);
        rra(a, p);
    }
    else if (first > second && second < third && first > third)
        ra(a, p);
    else if (first < second && second > third && first < third)
    {
        sa(a, p);
        ra(a, p);
    }
    else if (first < second && second > third && first > third)
        rra(a, p);
}

static float	compute_disorder(t_stack *stack)
{
	int		mistakes;
	int		total_pairs;
	t_stack	*comper;
	t_stack	*corent;

	mistakes = 0;
	total_pairs = 0;
	corent = stack;
	while (corent)
	{
		comper = corent->next;
		while (comper)
		{
			total_pairs++;
			if (corent->val > comper->val)
				mistakes++;
			comper = comper->next;
		}
		corent = corent->next;
	}
	if (total_pairs == 0)
		return (0);
	return ((float)mistakes / total_pairs);
}

static void	print_or_not(t_operations *p)
{
	if (!p->print)
		return ;
	write_file(p);
}

static void	disorder2(t_stack **stack, t_stack **b, t_operations *p)
{
	float	disorder;

	disorder = compute_disorder(*stack);
	p->disorder = disorder * 100;
	if (stack_size(*stack) == 3)
	{
		sort_three(stack, p);
		p->nonsimp++;
	}
	else if (disorder < 0.2)
	{
		p->nonsimp++;
		simple_sort(stack, b, p);
	}
	else if (disorder < 0.5)
	{
		indexing_stack(*stack);
		sorting_chunk(stack, b, p);
		p->nonmed++;
		pushing_back_to_a(stack, b, p);
	}
	else
	{
		indexing_stack(*stack);
		radix_sort(stack, b, stack_size(*stack), p);
	}
	print_or_not(p);
}

void	disorder(t_stack **stack, t_stack **b, t_operations *p)
{
	p->disorder = compute_disorder(*stack) * 100;
	if (p->simple || stack_size(*stack) == 5)
 	{
		simple_sort(stack, b, p);
		print_or_not(p);
	}
	else if (p->medium)
	{
		indexing_stack(*stack);
		sorting_chunk(stack, b, p);
		pushing_back_to_a(stack, b, p);
		print_or_not(p);
	}
	else if (p->comple)
	{
		indexing_stack(*stack);
		radix_sort(stack, b, stack_size(*stack), p);
		print_or_not(p);
	}
	else
		disorder2(stack, b, p);
}
