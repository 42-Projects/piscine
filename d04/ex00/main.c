/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:33:05 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/17 16:46:31 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb);

int main(void)
{
	int		num;

	num = 5;
	
	printf ("Factorial of %d = %d", num, ft_iterative_factorial(num));
}
