/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:42:12 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 17:45:59 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* listenin basına yeni eleman ekler*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

// int	main()
// {
// 	t_list *liste;
// 	t_list *eleman;	
// 	liste = ft_lstnew("listeler");
// 	eleman = ft_lstnew("yeni");
// 	ft_lstadd_back(&liste,eleman);
// 	while(liste)
// 	{
// 		printf("%s\n",liste->content);
// 		liste = liste->next;
// 	}	
// 	return (0);
// }