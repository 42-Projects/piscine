/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapecheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:26:07 by jpiao             #+#    #+#             */
/*   Updated: 2018/05/09 15:44:02 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	rectcheck(int x, int y)
{
	int b;
	int a;

	b = -1;
	while (++b < y)
	{
		a = -1;
		while (a++ < x)
		{
			if ((b == 0 || b == y - 1 || a == 0 || a == x - 1)
				&& g_buf[(x + 1) * b + a] == ' ')
				return (-1);
			if (a == x && g_buf[(x + 1) * b + a] != '\n')
				return (-1);
			if (b > 0 && b < y - 1 && a > 0 && a < x - 1
				&& g_buf[(x + 1) * b + a] != ' ')
				return (-1);
		}
	}
	output(5, x, y);
	g_c++;
	if (x == y)
		output(6, x, y);
	return (1);
}

int	revrect(int x, int y)
{
	int b;
	int a;

	b = -1;
	while (++b < y)
	{
		a = -1;
		while (a++ < x)
		{
			if ((b == 0 || b == y - 1 || a == 0 || a == x - 1)
				&& g_buf[(x + 1) * b + a] != ' ')
				return (-1);
			if (a == x && g_buf[(x + 1) * b + a] != '\n')
				return (-1);
			if (b > 0 && b < y - 1 && a > 0 && a < x - 1
				&& g_buf[(x + 1) * b + a] == ' ')
				return (-1);
		}
	}
	output(7, x, y);
	g_c++;
	if (x == y)
		output(8, x, y);
	return (1);
}
