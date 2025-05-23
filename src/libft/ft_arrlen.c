/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:45:23 by ymazoz            #+#    #+#             */
/*   Updated: 2025/05/20 18:49:44 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arrlen(char **s)
{
	char	**tmp;

	tmp = s;
	if (s && *s)
	{
		while (*tmp)
			tmp++;
		return (tmp - s);
	}
	return (0);
}
