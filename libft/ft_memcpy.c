/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:13:55 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/30 15:14:00 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*v;
	size_t			i;

	i = 0;
	p = (unsigned char *)dest;
	v = (unsigned char *)src;
	while (i < n)
	{
		p[i] = v[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void){
	char dest[] = "test text";
	char src[] = "main text";
	char *p = memcpy(dest, src, 5);
	printf("%s\n", p);
	return 0;
}
*/
