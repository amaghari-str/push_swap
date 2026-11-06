/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:41:48 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:43:08 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	tlower(unsigned int i, char s)
{
	(void) i;
	if (s <= 90 && s >= 65)
		return (s + 32);
	return (s);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || (!s && !f))
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main ()
{
	char arr[] = "SoMe StR";
	char *p = ft_strmapi(arr, tlower);
	printf("%s\n", p);
	free(p);
	return 0;
}
*/
