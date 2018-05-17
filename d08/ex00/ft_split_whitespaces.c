/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:18:51 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/23 15:48:12 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define OUT    0
#define IN    1

unsigned int  ft_WordCount(char *str)
{
    int state = OUT;
    unsigned wc = 0;

	while (*str)
    {
		if (*str == ' ' || *str == '\n' || *str == '\t')
            state = OUT;

		else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
         ++str;
    }

    return wc;
}

int		ft_WordLen(char *str, int index)
	{
		int c;
		c = 0;
		while (str[index]

char **ft_split_whitespaces(char *str);
{
	char	**a;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((a = malloc(size0f(char*) * (ft_WordCount(str) +1)) == NULL)
			return (NULL);
	while (str[i]
		{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
			if (str[i]
					{
						k = 0;
						if ((res[j] = malloc(sizeof(char) * 
