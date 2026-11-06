/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:53:17 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/25 15:29:47 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int	main(void)
{
	t_list	*arr;
	t_list	*res;
	int		i;

	arr = malloc(20 * sizeof(t_list));
	if (!arr)
		return (1);
	i = 0;
	while (i < 20)
	{
		arr[i].value = i;
		arr[i].next = &arr[i + 1];
		i++;
	}
	arr[19].next = NULL;

	res = ft_lstlast(arr);
	if (res == &arr[19] && res->value == 19)
		printf("Test 1 OK: last value = %d\n", res->value);
	else
		printf("Test 1 FAIL\n");

	res = ft_lstlast(&arr[19]);
	if (res == &arr[19])
		printf("Test 2 OK: single element\n");
	else
		printf("Test 2 FAIL\n");

	// NULL
	res = ft_lstlast(NULL);
	if (res == NULL)
		printf("Test 3 OK: NULL -> NULL\n");
	else
		printf("Test 3 FAIL\n");

	free(arr);
	return (0);
}
*/
