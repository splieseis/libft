/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:29:38 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/10 11:24:44 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
