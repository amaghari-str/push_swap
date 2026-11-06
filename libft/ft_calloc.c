/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:28:42 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/25 15:30:26 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t l)
{
	unsigned char	*p;
	size_t			res;

	if (n != 0 && l > 4294967295 / n)
		return (NULL);
	res = n * l;
	p = malloc(res);
	while (res > 0)
	{
		res--;
		p[res] = (unsigned char) '\0';
	}
	return ((void *)p);
}
/*
#include <stdio.h>

int main (void)
{
	char *p = ft_calloc(3, 3);
	int i = 0;
	while (i != 9)
	{
		printf("%c", *p);
		p++;
		i++;
	}
	printf("end");
	return 0;
}
*/
