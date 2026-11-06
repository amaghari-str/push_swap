/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:19:02 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/30 15:19:05 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*s;

	i = 0;
	p = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] != s[i])
		{
			return (p[i] - s[i]);
		}
		if (p[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 3));
	printf("%d\n", ft_strncmp("abc", "abd", 3));
	printf("%d\n", ft_strncmp("abc", "abd", 2));
	printf("%d\n", ft_strncmp("abc", "abcdef", 6));
	return (0);
}
*/
