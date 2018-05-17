/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:17:46 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/20 14:51:15 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int main()
{
   //initializing character pointer
   char *str = "Learn C from trytoprogram.com";
   char *to_find = "top";

   //displaying both string
   printf("str = %s\n\n", str);
   printf("to_find = %s\n\n", to_find);
   printf("occurence of to_find = %s\n", ft_strstr(str, to_find));

   return 0;
}//end main
