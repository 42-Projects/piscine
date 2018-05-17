/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 12:32:42 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/20 18:59:04 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		ind;
	int		y;
	char	*occ;

	occ = 0;
	if (to_find[0] == '\0')
		return (str);
	ind = 0;
	while (str[ind] != '\0')
	{
		if (str[ind] == to_find[0])
		{
			occ = str + ind;
			y = 0;
			while (str[ind + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (occ);
				y++;
			}
			occ = 0;
		}
		ind++;
	}
	return (0);:
}
