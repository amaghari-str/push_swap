/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:01:46 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/12 17:19:50 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h""
#include <threads.h>

int	main(int argc, char **argv)
{
	t_list		*p;
	c_operations	*banch;

	p = create_fill_struct(argc, argv);
	if(!pars(banch = ft_calloc(sizeof(banch)), argv, argc) || !p)
	{
		ft_putstr_fd("Error", 1);
		return 1;
	}
	return 0;
}
