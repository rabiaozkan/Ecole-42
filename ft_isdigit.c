/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:33:42 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 16:01:17 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*c parametresinin rakam olup olmadıgına bakılır*/
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
