/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:06:53 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/19 20:22:01 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ftt_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

static int	count_total_op(t_operations *p)
{
	int	total;

	total = p->sa + p->sb + p->ss + p->pa + p->pb;
	total += p->rr + p->ra + p->rb;
	total += p->rra + p->rrb + p->rrr;
	return (total);
}

static void	print_operations(t_operations *p)
{
	ft_putstr_fd("\n[bench sa:  ", 2);
	ft_putnbr_fd(p->sa, 2);
	ft_putstr_fd("  sb:  ", 2);
	ft_putnbr_fd(p->sb, 2);
	ft_putstr_fd("  ss:  ", 2);
	ft_putnbr_fd(p->ss, 2);
	ft_putstr_fd("  pa:  ", 2);
	ft_putnbr_fd(p->pa, 2);
	ft_putstr_fd("  pb:  ", 2);
	ft_putnbr_fd(p->pb, 2);
	ft_putstr_fd("\n[bench] ra:  ", 2);
	ft_putnbr_fd(p->ra, 2);
	ft_putstr_fd("  rb:  ", 2);
	ft_putnbr_fd(p->rb, 2);
	ft_putstr_fd("  rr:  ", 2);
	ft_putnbr_fd(p->rr, 2);
	ft_putstr_fd("  rra:  ", 2);
	ft_putnbr_fd(p->rra, 2);
	ft_putstr_fd("  rrb:  ", 2);
	ft_putnbr_fd(p->rrb, 2);
	ft_putstr_fd("  rrr:  ", 2);
	ft_putnbr_fd(p->rrr, 2);
}

void	write_file(t_operations *p)
{
	ft_putstr_fd("[bench] disorder:  ", 2);
	ft_putnbr_fd(p->disorder, 2);
	ft_putstr_fd("%\n[bench] stratygy:  ", 2);
	if (p->simple)
		ft_putstr_fd("simple (O)(n2))\n", 2);
	else if (p->medium)
		ft_putstr_fd("medium (O(n√n))\n", 2);
	else if (p->comple)
		ft_putstr_fd("Complex (O(n log n)))\n", 2);
	else
	{
		ft_putstr_fd("Adaptive / ", 2);
		if (p->nonmed)
			ft_putstr_fd("(O(n√n))\n", 2);
		else if (p->nonsimp)
			ft_putstr_fd("(O)(n2))\n", 2);
		else
			ft_putstr_fd("(O(n log n)))\n", 2);
	}
	ft_putstr_fd("[bench] total_ops:  ", 2);
	ft_putnbr_fd(count_total_op(p), 2);
	print_operations(p);
}
