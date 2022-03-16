/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:44:59 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 14:46:06 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*func(char *str, long nbr, size_t size)
{
	while (nbr > 0)
	{
		*(str + size --) = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	if (n > 0)
		size = 0;
	else if (n <= 0)
		size = 1;
	if (nbr < 0)
		nbr = -nbr;
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	*(str + size--) = '\0';
	str = func(str, nbr, size);
	return (str);
}
