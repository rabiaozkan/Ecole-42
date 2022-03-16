/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:43:31 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 17:36:38 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* yeni element oluşturulan content değişkeni çıktı olarak verilir*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (!newlist)
		return (NULL);
	newlist -> content = content;
	newlist -> next = NULL;
	return (newlist);
}

// int	main()
// {
// 	char str[] = "asdas";
// 	t_list *liste;
// 	liste = ft_lstnew(str);
// 	printf("%s",liste->content);
// }