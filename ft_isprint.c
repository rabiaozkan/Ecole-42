/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:48:24 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 16:02:22 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Harf, rakam, noktalama gibi yazdırılabilir bir parametre mi olduguna bakılır*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
