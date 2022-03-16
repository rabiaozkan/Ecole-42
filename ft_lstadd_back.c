/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:27:15 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 19:31:25 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* listenin sonuna yeni eleman eklenir */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last -> next)
		last = last -> next;
	last -> next = new;
}

// int	main()
// {
// 	t_list *liste =ft_lstnew("bir");
// 	ft_lstadd_back(&liste,ft_lstnew("iki"));
// 	while(liste)
// 	{
// 		printf("%s\n",liste->content);
// 		liste = liste->next;
// 	}	
// 	return (0);
// }