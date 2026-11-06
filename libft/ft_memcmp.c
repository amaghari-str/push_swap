/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:07:42 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/26 15:07:41 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *cont, const void *data, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	if (n == 0)
		return (0);
	s1 = (const unsigned char *)cont;
	s2 = (const unsigned char *)data;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
//     /*
//         // Check Arrays are Equal or Not
//         int s1[] = {10, 20, 35, 40};
//         int s2[] = {10, 20, 35, 40};
//         int res = ft_memcmp(s1, s2, sizeof(s1));
//         if (res == 0)
//             printf("Arrays are identical");
//         else
//             printf("Arrays differ");
//     */

//     /*
//         int v1[] = { 'a', 'b', 'c' };
//         int v2[sizeof(v1)] = { 'd', 'e', 'f' };
//         int res1 = ft_memcmp(v1, v2, 0);
//         if (res1 == 0)
//             printf("Arrays are identical");
//         else
//             printf("Arrays differ");
//     */

//     /*
//         char myStr1[] = "AB";
//         char myStr2[] = "Q";
//         int cmp = memcmp(myStr1, myStr2, 2);
//         if (cmp > 0) {
//             printf("%s is greater than %s\n", myStr1, myStr2);
//         } else if (cmp < 0) {
//             printf("%s is greater than %s\n", myStr2, myStr1);
//         } else {
//             printf("%s is equal to %s\n", myStr1, myStr2);
//         }
//     */
// }
