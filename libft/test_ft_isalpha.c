/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:38:37 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/11 18:09:28 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

static void ft_print_digits(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_print_digits(n % 10 + '0');
		}
		else
			ft_print_digits(n + '0');
	}
}

int	ft_isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

int main(void)
{
	int var1 = 'A';
	int var2 = 'Y';
	int var3 = 'c';
	int var4 = ' ';

	write(1, "mine:", 5);
	ft_putnbr(ft_isalpha(var1));
	ft_putnbr(ft_isalpha(var2));
	ft_putnbr(ft_isalpha(var3));
	ft_putnbr(ft_isalpha(var4));
	write(1, "\nreal:", 6);
	ft_putnbr(isalpha(var1));
	ft_putnbr(isalpha(var2));
	ft_putnbr(isalpha(var3));
	ft_putnbr(isalpha(var4));
	return (0);
}
