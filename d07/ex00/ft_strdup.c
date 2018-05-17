/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:02:37 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/22 18:20:12 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		ind++;
	}
	return (ind);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len_src;
	int		i;

	i = 0;
	len_src = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (len_src + 1));
	while (i < len_src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
