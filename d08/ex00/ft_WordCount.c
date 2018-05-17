/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_WordCount.c                                    :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:32:59 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/23 14:17:11 by mlewis-l         ###   ########.fr       */
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
