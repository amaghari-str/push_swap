/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 12:47:23 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/24 18:55:36 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_swap
{
	int				val;
	int				index;
	struct s_swap	*next;
	struct s_swap	*previous;
}	t_stack;

typedef struct s_operation
{
	int	nonmed;
	int	nonsimp;
	int	medium;
	int	simple;
	int	comple;
	int	disorder;
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
}	t_operations;

void	sa(t_stack **stack, t_operations *p);
void	sb(t_stack **stack, t_operations *p);
void	ss(t_stack **b, t_stack **a, t_operations *p);
void	pa(t_stack **a, t_stack **b, t_operations *p);
void	pb(t_stack **a, t_stack **b, t_operations *p);
void	ra(t_stack **a, t_operations *p);
void	rb(t_stack **b, t_operations *p);
void	rr(t_stack **a, t_stack **b, t_operations *p);
void	rra(t_stack **a, t_operations *p);
void	rrb(t_stack **b, t_operations *p);
void	rrr(t_stack **a, t_stack **b, t_operations *p);

int		ft_isintanse(char *argv, char t);
int		is_sorted(t_stack *lst);
int		parser(char **argv, t_operations *p);
int		non_flag(char **argv);
int		ft_sqrt(int nbr);
int		find_next_position(t_stack *stack);
int		stack_size(t_stack *stack);

t_stack	**create_fill_struct(int argc, char **argv, t_operations *bench);
t_stack	*ftt_lstlast(t_stack *lst);

void	free_sta_a(t_stack **p, t_operations *bench);
void	sorting_chunk(t_stack **stack_a, t_stack **stack_b,
			t_operations *p);
void	pushing_back_to_a(t_stack **stack_a, t_stack **stack_b,
			t_operations *p);
void	disorder(t_stack **stack, t_stack **b, t_operations *p);
void	write_file(t_operations *p);
void	simple_sort(t_stack **a, t_stack **b, t_operations *p);
void	difficult_sort(t_stack **stack, t_stack **b, t_operations *p);
void	indexing_stack(t_stack *stack);
void	radix_sort(t_stack **stack_a, t_stack **stack_b, int size,
			t_operations *p);

#endif
