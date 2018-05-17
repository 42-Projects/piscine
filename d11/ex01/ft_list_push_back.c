/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:39:40 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/27 20:35:10 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *s_list;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		s_list = *begin_list;
		while (s_list->next != 0)
			s_list = s_list->next;
		s_list->next = ft_create_elem(data);
	}
}
