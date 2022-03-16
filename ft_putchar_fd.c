/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:16:26 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/02 23:16:26 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* file descriptora c parametresi yazılır*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
