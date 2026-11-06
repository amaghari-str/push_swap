/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:15:56 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/30 15:42:25 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move(unsigned char *p, const unsigned char *s, size_t value)
{
	size_t	i;

	i = value;
	while (i > 0)
	{
		i--;
		p[i] = s[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t value)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*s;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src || value == 0)
		return (dest);
	if (p < s)
	{
		i = 0;
		while (i < value)
		{
			p[i] = s[i];
			i++;
		}
	}
	else
		move(p, s, value);
	return (dest);
}
/*
#include <stdio.h>

int main (void){
    char arr[] = "i do know the way";
    int suu[] = {3, 6, 3, 7, 8, 454, 453, 21};
    ft_memmove(arr + 1, arr, 16);
    ft_memmove(suu + 1, suu, 7);
    printf("%s\n", arr);
    for (int i = 0; i < 7; i++){
        printf("%d\n", suu[i]);
    }
    return 0;
}
*/
