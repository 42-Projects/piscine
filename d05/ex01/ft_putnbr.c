/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:18:05 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/19 17:16:15 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putlong(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putlong(nb * -1);
	}
	else if (nb >= 10)
	{
		ft_putlong(nb / 10);
		ft_putlong(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putnbr(int nb)
{
	long long_number;

	long_number = nb;
	ft_putlong(long_number);
}
