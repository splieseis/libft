/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:30:49 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/11 18:52:05 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

/*??? weird stuff happend with originl putchar: printed:
 "real: mine:" and then TEST TEST"*/

int	ft_toupper(int c)
{
if ('a' <= c && c <= 'z')
	return (c - 32);
else
	return (c);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int i;
	char c;
	char str[] = "Test";

	i = 0;
	write(1, "real:", 5);
	while(str[i])
	{
		ft_putchar (toupper(str[i]));
		i++;
	}
	i = 0;
	write(1, "\n", 1);
	write(1, "mine:", 5);
	while(str[i])
	{
		ft_putchar (ft_toupper(str[i]));
		i++;
	}
	return(0);
}
