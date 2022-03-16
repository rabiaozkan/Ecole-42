/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:50:14 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 19:31:30 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* del ve free ile eleman siliniip hafızadaki yeri temizlenir */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*liste;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		liste = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = liste;
	}
}

// void sil(void *lst)
// {
// 	free(lst);
// }
// int main()
// {
// 	t_list *list1= ft_lstnew(ft_strdup("bir"));
// 	ft_lstadd_back(&list1, ft_lstnew(ft_strdup("iki")));
// 	ft_lstclear(&list1, sil);
// 	printf("%s", list1->content);
// 	return (0);
// }