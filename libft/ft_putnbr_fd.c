/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:10:27 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/10 11:35:58 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_print_digits_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_print_digits_fd(n % 10 + '0', fd);
		}
		else
			ft_print_digits_fd(n + '0', fd);
	}
}
