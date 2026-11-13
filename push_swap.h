/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 12:47:23 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 21:36:10 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

#include <stddef.h>
#include <unistd.h>

typedef struct s_swap{
	int val;
	int index;
	struct s_swap *next;
	struct s_swap *previous;
} t_list;

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
void 	rrr(t_list a, t_list **b);
void	indexing_stack(t_list *stack);
int	ft_sqrt(int nbr);
void	sorting_chunk(t_list **stack_a, t_list **stack_b, c_operations *p);
int	find_next_position(t_list *stack);
void	pushing_back_to_a(t_list **stack_a, t_list **stack_b, c_operations *p);
int	check_duplicates(t_list *stack);

#endif
