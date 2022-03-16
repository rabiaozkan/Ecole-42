/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:13:47 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 19:31:38 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* listede dolanıp her elemana f'i uygular */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void f(char *b)
// {
// 	printf("%s \n", b);
// }
// int main()
// {
// 	t_list *lst1 = ft_lstnew(ft_strdup("bir"));
// 	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("iki")));
// 	ft_lstiter(lst1, (void *)f);
// 	return (0);
// }