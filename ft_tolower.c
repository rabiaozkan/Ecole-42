/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:46:29 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 19:23:54 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*buyuk harfleri kucuk harf yapar*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
