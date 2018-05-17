/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:38:56 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/29 13:30:55 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/type.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include "...."

#define BUF_SIZE

int		open_file(void);
{
	int	fd;

	fd = open("file-1", O-RDONLY);
	
