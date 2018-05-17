/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:28:37 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/20 11:28:44 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{	
static char		str1[100];
char			*str2 = "My name is Maggie.";

printf("%s\n", str1);
ft_strncpy(str1, str2, 10);
printf("%s\n", str1);
ft_strncpy(str1, str2, 10);
printf("%s\n", str1);
ft_strncpy(str1, str2, 15);
printf("%s\n", str1);
ft_strncpy(str1, str2, 20);
printf("%s\n", str1);
ft_strncpy(str1, str2, 30);
return (0);
}
