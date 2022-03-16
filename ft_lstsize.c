/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:16:45 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 17:53:07 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* listedeki eleman sayısını bulur */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst -> next;
		size++;
	}
	return (size);
}

// int main()
// {	
// 	t_list *lst = ft_lstnew("eleman1");
// 	t_list *eleman = ft_lstnew("eleman2");
// 	ft_lstadd_back(&lst, eleman);
// 	printf("liste eleman sayısı : %d", ft_lstsize(lst));
// 	return (0);
// }