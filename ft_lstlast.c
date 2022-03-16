/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:19:07 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 17:58:40 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* listenin son elemanı doner */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// int main()
// {
// 	t_list *list1 = ft_lstnew("bir");
// 	ft_lstadd_back(&list1,ft_lstnew("iki"));
// 	ft_lstadd_back(&list1,ft_lstnew("uc"));
// 	list1 = ft_lstlast(list1);
// 	printf("%s", list1->content);
// }