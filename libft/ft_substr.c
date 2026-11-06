/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:00:23 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/26 12:12:47 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s[start], len + 1);
	return (p);
}
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	p = malloc(len + 1);
	ft_strlcpy(p, &s[start], len);
	return (p);
}
*/
/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World!";

    printf("%s\n", ft_substr(str, 0, 5));  // Hello
    printf("%s\n", ft_substr(str, 7, 5));  // World
    printf("%s\n", ft_substr(str, 0, 13)); // Hello, World!
    printf("%s\n", ft_substr(str, 7, 0));  // Пустая строка

    return 0;
}
*/
