/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:59:33 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/14 13:04:49 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(n)
{
	int i;

	if (n < 0)
		n *= -1;
	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int digits;
	int sign;
	char *ret;

	if (n == -2147483648)
		return ("-2147483648\0");
	sign = 0;
	if (n < 0)
		sign = 1;
	digits = ft_digits(n);
	ret = (char *)malloc(sizeof(char) * (digits + 1 + sign));
	if (!ret)
		return (NULL);
	if (sign)
	{
		ret [0] = '-';
		n *= -1;
	}
	ret[digits + sign] = '\0';
	while (digits > 0)
	{
		ret[digits-- - 1 + sign] = n % 10 + '0';
		n = n / 10;
	}
	return (ret);
}
