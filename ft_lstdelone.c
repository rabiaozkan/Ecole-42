/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:40:41 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 18:21:19 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* def fonksiyonu ile parametrenin memorydeki yeri freelenir */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	lst -> content = NULL;
	lst -> next = NULL;
	free(lst);
	lst = NULL;
}

// void	sil(void *lst)
// {
// 	free(lst);
// }
// int main()
// {
// 	t_list *list1 = ft_lstnew("bir");
// 	t_list *next;
// 	ft_lstadd_back(&list1,ft_lstnew(ft_strdup("iki")));
// 	ft_lstadd_back(&list1,ft_lstnew(ft_strdup("uc")));
// 	ft_lstdelone(ft_lstlast(list1), sil);
// 	while (list1)
// 	{
// 		printf("%s\n", list1->content);
// 		list1 = list1->next;
// 	}
// 	return (0);
// }