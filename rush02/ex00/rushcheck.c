/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:29:37 by cwu               #+#    #+#             */
/*   Updated: 2018/04/01 14:28:58 by jpiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_rush	g_r[] =
{
	{'-', '|', 'o', 'o', 'o', 'o'},
	{'*', '*', '/', '\\', '\\', '/'},
	{'B', 'B', 'A', 'A', 'C', 'C'},
	{'B', 'B', 'A', 'C', 'A', 'C'},
	{'B', 'B', 'A', 'C', 'C', 'A'}
};

void	firstrow(int i, int x, int b)
{
	int a;

	a = -1;
	while (++a < x)
	{
		if (a == 0)
			g_ch[(x + 1) * b + a] = g_r[i].ul;
		else if (a == x - 1)
			g_ch[(x + 1) * b + a] = g_r[i].ur;
		else
			g_ch[(x + 1) * b + a] = g_r[i].eh;
	}
	g_ch[(x + 1) * b + x] = '\n';
}

void	middlerow(int i, int x, int b)
{
	int a;

	a = -1;
	while (++a < x)
	{
		if (a == 0 || a == x - 1)
			g_ch[(x + 1) * b + a] = g_r[i].ev;
		else
			g_ch[(x + 1) * b + a] = ' ';
	}
	g_ch[(x + 1) * b + a] = '\n';
}

void	lastrow(int i, int x, int b)
{
	int a;

	a = -1;
	while (++a < x)
	{
		if (a == 0)
			g_ch[(x + 1) * b + a] = g_r[i].bl;
		else if (a == x - 1)
			g_ch[(x + 1) * b + a] = g_r[i].br;
		else
			g_ch[(x + 1) * b + a] = g_r[i].eh;
	}
	g_ch[(x + 1) * b + a] = '\n';
}

char	*rushcheck(int i, int x, int y)
{
	int b;

	b = -1;
	while (++b < y)
	{
		if (b == 0)
			firstrow(i, x, b);
		else if (b == y - 1)
			lastrow(i, x, b);
		else
			middlerow(i, x, b);
	}
	g_ch[(x + 1) * y] = '\0';
	if (ft_strcmp(g_buf, g_ch) == 0)
	{
		output(i, ft_strlen(g_buf) / y - 1, y);
		g_c++;
	}
	return (g_ch);
}
