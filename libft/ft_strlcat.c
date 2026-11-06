/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:14:51 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/30 15:14:55 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	i;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		b++;
	if (size <= a)
		return (size + b);
	i = 0;
	while (src[i] != '\0' && a + i + 1 < size)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (a + b);
}
/*
#include <stdio.h>

 int main(){
 	char str[] = "text test";
	char arr[30] = "from ferst";
	printf("%u\n", ft_strlcat(arr, str, 30));
	printf("%s\n", arr);
	return 0;
}
*/
