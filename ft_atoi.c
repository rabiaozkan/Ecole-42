/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:00:18 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 15:51:24 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* "/r/t-*#-1650" --> -1650 */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (ft_isdigit(str[i]))
	{
		if (result >= 2147483647)
			return (-1);
		if (result <= -2147483648)
			return (0);
		result = (result * 10 + (str[i] - '0') * sign);
		i++;
	}
	return (result);
}

// }
// int	main()
// {
//  	char n[40] = "+1234";
// 	int i2 = ft_atoi(n);
// }