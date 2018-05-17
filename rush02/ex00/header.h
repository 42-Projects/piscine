/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 01:18:18 by jpiao             #+#    #+#             */
/*   Updated: 2018/05/10 17:13:03 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 32000
# define ABS(value) (value >= 0 ? value : -value)

typedef struct	s_rush
{
	char	eh;
	char	ev;
	char	ul;
	char	ur;
	char	bl;
	char	br;
}				t_rush;

char			g_buf[BUF_SIZE + 1];
char			g_ch[BUF_SIZE + 1];
int				g_c;

void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);

char			*rushcheck(int i, int x, int y);
int				rectcheck(int x, int y);
void			output(int i, int x, int y);
int				revrect(int x, int y);

#endif
