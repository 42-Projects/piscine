/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:26:33 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/22 19:56:10 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*r;
	int		index;

	index = 0;
	if (min >= max)
	{
		return (NULL);
	}
	r = (int*)malloc(sizeof(*r) * (max - min));
	while (min < max)
	{
		r[index] = min;
		min++;
		index++;
	}
	return (r);
}
