/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 19:16:03 by ysemlali          #+#    #+#             */
/*   Updated: 2025/05/20 19:00:33 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "stdlib.h"

typedef struct s_error
{
	int		code;
	char	*description;
	char	*problem;
	char	*hint;
}			t_error;

// error codes

#endif
