/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:34:30 by jpiao             #+#    #+#             */
/*   Updated: 2018/05/09 15:43:59 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		readl(char *g_buf)
{
	char	t;
	int		y;
	int		i;

	y = 0;
	i = 0;
	while ((read(0, &t, 1)) && i < BUF_SIZE)
	{
		if (t == '\n')
			y++;
		g_buf[i] = t;
		i++;
	}
	g_buf[i] = '\0';
	return (y);
}

void	output(int i, int x, int y)
{
	(g_c ? ft_putstr(" || ") : 1);
	ft_putstr("[");
	if (i <= 4)
	{
		ft_putstr("rush-0");
		ft_putnbr(i);
	}
	(i == 5 ? ft_putstr("rectangle") : 1);
	(i == 6 ? ft_putstr("square") : 1);
	(i == 7 ? ft_putstr("rectangle inverse") : 1);
	(i == 8 ? ft_putstr("square inverse") : 1);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

int		main(void)
{
	int		x;
	int		y;
	int		i;

	y = readl(g_buf);
	if (ft_strlen(g_buf) >= BUF_SIZE - 1)
	{
		ft_putstr("error: input may not exceed 32kb\n");
		return (-1);
	}
	x = ft_strlen(g_buf) / y - 1;
	i = -1;
	g_c = 0;
	while (++i <= 4)
		rushcheck(i, x, y);
	rectcheck(x, y);
	revrect(x, y);
	if (g_c == 0)
		ft_putstr("aucune");
	ft_putstr("\n");
	return (0);
}
