/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:14:12 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/30 15:14:16 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int a, size_t n)
{
	unsigned char		*p;
	size_t				i;

	i = 0;
	p = (unsigned char *)b;
	while (i < n)
	{
		p[i] = (unsigned char)a;
		i++;
	}
	return ((void *)b);
}
/*
#include <stdio.h>
int main (void){
	char arr[] = "some text .txt";
	char *p = (char *)memset(arr, 'a', 4);
	printf("%s \n", p);
	return 0;
}
*/
