/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:49:52 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/18 16:19:36 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* stringi, starttan başlayıp len boyutunda yazar
s=merhaba start=3 len=5 out=rhaba */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		newstr[j++] = s[i++];
	newstr[j] = '\0';
	return (newstr);
}
