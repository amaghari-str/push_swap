/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:10:54 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/30 15:10:57 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include<unistd.h>
int main () {
    int res = ft_isprint('\t');
    if (res == 1)
    {
        write(1, "1\n", 2);
    } else {
        write(1, "0\n", 2);
    }
    return 0;
}
*/
