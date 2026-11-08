/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 12:47:23 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/08 13:56:21 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

typedef struct s_swap{
	int val;
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

#endif
