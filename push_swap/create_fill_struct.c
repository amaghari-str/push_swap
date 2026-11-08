/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_fill_struct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:32:09 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/08 16:29:15 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*create_fill_struct (int argc, char **argv)
{
	size_t	i;
	t_list	**p;

	i = 0;
	if (argc < 2)
		return (NULL);
	if (ft_isintanse(argv[1], ' '))
		
	else
	{
		p = malloc(sizeof(t_list *) * (argc - 1));
		fill(p, ++argv, argc - 1);
	}
}

void	fill(t_list **p, char **argv, int size)
{
	size_t	i;
	t_list	*next;
	t_list	*previous;

	i = 0;
	while (i < (size_t)size)
	{
		p[i] = malloc(sizeof(t_list));
		if (i == 0)
			p[i]->previous = NULL;
		else
			p[i]->previous = p[i - 1];
		if (i > 0)
			p[i - 1] -> next = p[i];
		p[i++] -> val = ft_atoi(*argv++);
	}
}

