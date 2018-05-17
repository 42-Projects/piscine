/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:11:45 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/26 22:44:02 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*str;
	int		i;

	str = (int*)malloc(sizeof(int) * (length));
	i = 0;
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
