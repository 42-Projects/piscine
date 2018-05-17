/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:28:37 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/20 21:27:33 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src);

int main ()
{
    char str1[]="Maggie Lerman";
    char str2[] = "Maggie LewisLerman";
    char str3[20];
    char str4[8];
    char str5[] = "Maggie LL";
     
    ft_strcpy(str2, str1);
    ft_strcpy(str3, "M Lewis-Lerman");
    ft_strcpy(str4, str5);
    printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4);
    return 0;
}
