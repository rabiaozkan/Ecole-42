/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:24:26 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/02 23:24:26 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* stringe new line ekleyip fd'ye yazar */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd > 0)
	{
		while (*s)
		{
			ft_putchar_fd (*s, fd);
			s++;
		}
		ft_putchar_fd ('\n', fd);
	}
}
