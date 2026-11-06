/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:23:27 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/26 14:10:01 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)dest;
	while (n)
	{
		*p = '\0';
		p++;
		n--;
	}
}
/*
#include<unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void printArray (char *str, int n) {
    int i = 0;
    while (i < n)
    {
        ft_putchar(str[i]);
        i++;
    }
    write(1, "\n", 1);
}

int main () {
    char s[100] = "Hello world";

    // print array before bzero
    printArray(s, 12);

    //print bzero itself
    ft_bzero(s, 5);
    // ft_bzero2(s, 5);
    // ft_bzero2(s, 5);

    // print same array after bzero
    printArray(s, 12);

   return 0;
}
*/
