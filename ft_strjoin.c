/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:48:11 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/01 18:59:46 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* malloc ile s1+s2+1 yer ayrılıp yazılır */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size1;
	int		size2;

	if (! s1 || ! s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) *(size1 + size2 + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, size1);
	ft_memcpy(str + size1, s2, size2);
	str[size1 + size2] = '\0';
	return (str);
}
