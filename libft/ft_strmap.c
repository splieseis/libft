/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:35:24 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:01:14 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	char	*ret;
	int		i;

	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[i])
	{
		ret[i] = (*f)(s[i]);
		i++;
	}
	ret[len] = '\0';
	return (ret);
}
