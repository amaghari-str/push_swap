/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:46:28 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:47:49 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	d;
	int		i;

	i = ft_strlen(str);
	d = (char)c;
	while (i >= 0)
	{
		if (str[i] == d)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, World!";

    printf("Find 'l' (res):    %s\n\n", ft_strrchr(str, 'l'));

    printf("Find 'z' (res):    %s\n\n", ft_strrchr(str, 'z'));

    printf("Find '\\0' (res):    %p\n", (void *)ft_strrchr(str, '\0'));

    return (0);
}
*/
