/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 21:43:15 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/20 22:24:01 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_invalid_char(char c)
{
	return (c > '9' || c < '0');
}

int		ft_atoi(char *str)
{
	int		i;
	long	result;
	bool	negative;

	i = 0;
	result = 0;
	negative = false;
	while (str[i] != '\0' && !(result != 0 && is_invalid_char(str[i])))
	{
		if (str[i] == '-' && result == 0)
			negative = true;
		else if (!is_invalid_char(str[i]))
			result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (negative)
		result *= -1;
	return ((int)result);
}
