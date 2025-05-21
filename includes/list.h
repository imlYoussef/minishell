/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 00:35:24 by souahidi          #+#    #+#             */
/*   Updated: 2025/05/21 21:02:01 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{

	struct s_list	*next;
}					t_list;

int					list_length(void *list);
void				*list_at(void *list, int index);
void				*list_tail(void *list);


void				list_free(void **list, void (*f)(void *));

void				list_insert(void **list, void *node);
void				*list_shift(void **list);
void				list_push(void **list, void *node);
void				*list_pop(void **list);

void				*list_map(void *list, void *(*f)(void *, int));
int					list_any(void *list, int (*p)(void *, int));
int					list_every(void *list, int (*p)(void *, int));

#endif
