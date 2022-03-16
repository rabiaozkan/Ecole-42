/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:41:19 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 15:59:23 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Bir harf ya da rakam mı kontrol edilir*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
