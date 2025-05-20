/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 19:33:11 by ysemlali          #+#    #+#             */
/*   Updated: 2025/05/20 19:12:48 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# include "config.h"
# include "error.h"
# include "libft.h"
# include "minishell.h"
# include "parser.h"
# include "list.h"
# include <errno.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct s_data
{
	t_error		error;
	t_config	config;
	// add your data member structs here in one unified struct
	// ...
}				t_data;



// test case for library
void 	print_hello_world(void);
void	printf_hello_world_parser(void);
#endif
