/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:46:26 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/26 16:01:21 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long			i;
	int				sign;
	unsigned long	sol;

	i = 0;
	sign = 1;
	sol = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sol = (sol * 10) + (str[i] - '0');
		i++;
	}
	if (sol > 2147483647 && sign == 1)
		ft_error();
	if (sol > 2147483648 && sign == -1)
		ft_error();
	return (sol * sign);
}

/*
int main(void)
{
	char *str = "     +1023456789";
//	printf("%d", atoi(str));
	printf("%d", ft_atoi(str));
}
*/
