/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:07:32 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 16:25:32 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

static int	ft_iswhite(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	while (ft_iswhite(str[i]))
		i++;
	res = 0;
	sign = 1;
	if (ft_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0') * sign;
		i++;
	}
	return (res);
}

/*
**	int main(void)
**	{
**	char *s = "-2147483648";
**	printf("real atoi: %d\n", atoi(s));
**	printf("my   atoi: %d\n", ft_atoi(s));
**	return(0);
**	}
*/
