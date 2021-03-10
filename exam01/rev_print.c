/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisim <yisim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 08:40:52 by yisim             #+#    #+#             */
/*   Updated: 2021/03/11 07:51:12 by yisim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void				ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char				*rev_print(char *str)
{
	int a;
	int b;
	const int x = ft_strlen(str);
	char rev[x - 1];

	if (str[0] == '\0')
		write(1, "\n", 1);
	a = x - 1;
	b = 0;
   while (a >= 0)
   {
		rev[b] = str[a];
 		a--;
		b++;
   }
   rev[b] = '\0';
   ft_putstr(rev);
   return (str);
}
