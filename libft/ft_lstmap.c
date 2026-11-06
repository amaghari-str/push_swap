/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:05:16 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/26 15:05:22 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *f(void *content)
// {
//     return ft_strdup((char *)content);
// }

// void del(void *node)
// {
//     free(node);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*newlst	;
	t_list		*node	;

	if (!lst)
		return (NULL);
	newlst = NULL;
	node = NULL;
	while (lst)
	{
		if (!f)
			node = ft_lstnew(lst->content);
		else
		{
			node = ft_lstnew(f(lst->content));
			if (!node)
			{
				ft_lstclear(&newlst, del);
				return (NULL);
			}
			ft_lstadd_back(&newlst, node);
			lst = lst->next;
		}
	}
	return (newlst);
}
// #include <stdio.h>
// int main(void)
// {
//     t_list *lst;
//     t_list *new_lst;
//     t_list *current;

//     lst = NULL;
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Hello")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("World")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("42")));

//     new_lst = ft_lstmap(lst, f, del);

//     current = new_lst;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     ft_lstclear(&lst, del);
//     ft_lstclear(&new_lst, del);

//     new_lst = ft_lstmap(NULL, f, del);
//     if (new_lst == NULL)
//         printf("PASS: empty list\n");
//     else
//     {
//         printf("FAIL: empty list\n");
//         ft_lstclear(&new_lst, del);
//     }
//     return (0);
// }
