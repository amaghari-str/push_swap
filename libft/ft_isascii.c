/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:10:09 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/30 15:10:13 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include<unistd.h>
int main () {
    int res = ft_isascii('=');
    if (res == 1)
    {
        write(1, "1\n", 2);
    } else {
        write(1, "0\n", 2);
    }
    return 0;
}
*/
