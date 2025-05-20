/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_safe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:45:14 by ymazoz            #+#    #+#             */
/*   Updated: 2025/05/20 18:45:15 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_safe(const void *value, int *out)
{
	int			sign;
	long		output;
	const char	*str;

	sign = 1;
	output = 0;
	if (!value)
		return (*out = 0, 0);
	str = (const char *)value;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (output > (LONG_MAX - (*str - '0')) / 10)
			return (0);
		output = (output * 10) + (*str - '0');
		str++;
	}
	*out = (output * sign);
	return (1);
}
