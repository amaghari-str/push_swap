/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 12:47:23 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 18:51:46 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_swap
{
	int	val;
	int	index;
	struct s_swap	*next;
	struct s_swap	*previous;
}	t_list;

typedef struct s_operation
{
    int medium;
    int simple;
	int	print;
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	rr;
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
	int	rrr;
}	c_operations;

void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **b, t_list **a);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list a, t_list **b);
void	simple_sort(t_list **a, t_list **b);
int	is_sorted(t_list *lst);
t_list	*create_fill_struct (int argc, char **argv);

#endif
