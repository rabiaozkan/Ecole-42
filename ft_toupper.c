/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:42:09 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 19:23:38 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Kucuck harfleri buyuk harf yapar*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
