/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:21:29 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 19:31:14 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;

	new = NULL;
	if (!lst || !f)
		return (NULL);
	list = 0;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear (&list, del);
			return (NULL);
		}
		ft_lstadd_back (&list, new);
		lst = lst -> next;
	}
	return (list);
}

// void del(void *d)
// {
// 	free(d);
// }
// void *buyuk_harf(void *data)
// {
// 	char *old;
// 	char *new;

// 	old = (char *)data;
// 	new = ft_strdup(old);

// 	new[0] = ft_toupper(new[0]);
// 	return ((void *)new);
// }
// int main()
// {
// 	t_list *yeni;
// 	t_list *lst1 = ft_lstnew(ft_strdup("bir"));
// 	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("iki")));
// 	yeni = ft_lstmap(lst1, buyuk_harf, del);
// 	printf("%s",yeni->content);
// 	return (0);
// }