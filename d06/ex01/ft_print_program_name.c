/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:19:16 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/21 19:31:31 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int ind;

	if (argc > 0)
	{
		ind = 0;
		while (argv[0][ind] != '\0')
		{
			ft_putchar(argv[0][ind]);
			ind++;
		}
		ft_putchar('\n');
	}
	return (0);
}
