/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:53:26 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/11 15:21:42 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int i;
	int len;

	i = 0;
	len = n;
	while ((s1[i] == s2[i]) && i < (len - 1))
	{
		ft_print_digits('a');
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

int main (void)
{
	char *s1 = "as";
	char *s2 = "asdf";
	ft_putnbr(ft_strncmp(s1, s2, 0));
	ft_print_digits('\n');
	ft_putnbr(strncmp(s1, s2, 0));
	return (0);
}
