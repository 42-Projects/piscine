/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 21:07:08 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/19 20:57:28 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int answer;

	if (0 < nb && nb < 13)
	{
	answer = nb * ft_recursive_factorial(nb - 1);
	return (answer);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
