/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:51:45 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/26 15:03:29 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include<stdio.h>
void f(void *content)
{
    if(content)
        // return ;
        ft_putstr_fd((char *)content, 1);
        // printf("%s\n", (char *)content);
    ft_putstr_fd("\n", 1);
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int main()
{
    t_list *lst;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    lst = NULL;
    node1 = ft_lstnew("Hello");
    node2 = ft_lstnew("42");
    node3 = ft_lstnew("Libft");

    if (!node1 || !node2 || !node3)
        return (1);

    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);

    ft_lstiter(lst, f);

    ft_lstclear(&lst, NULL);
    return (0);
}
*/
