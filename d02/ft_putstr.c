/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 15:25:41 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/29 16:51:12 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\n')	
		{
			ft_putchar(*str);
			str++;
		}
}

int	main(char *string)
{
	int a;
	a = 
	string = "Hello World";
		ft_putstr(*string);
	return (0);
}

