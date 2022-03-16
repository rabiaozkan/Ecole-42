/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:30:44 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 15:58:07 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Bellekte yer ayırıp sıfırla doldurur*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = malloc (count * size);
	if (!str)
		return (str);
	ft_bzero(str, count * size);
	return (str);
}
