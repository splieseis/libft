/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:43:35 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/14 16:59:20 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_iswhite(char c)
{
	if (c == ' '  || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static int ft_strlen(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int ft_strstart(char const *s)
{
	int i;

	i = 0;
	while (ft_iswhite(s[i]))
	 i++;
	return (i);
}

static int ft_strend(char const *s, int len)
{
	while (ft_iswhite(s[len - 1]))
	 len--;
	return (len - 1);
}

char	*ft_strtrim(char const *s)
{
	int len;
	int start;
	int end;
	char *ret;

	len = ft_strlen(s);
	start = ft_strstart(s);
	end = ft_strend(s, len);
	ret = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!ret)
		return (NULL);
	len = 0;
	while (start <= end)
	{
		ret[len] = s[start];
		len++;
		start++;
	}
	ret[end + 1] = '\0';
	return (ret);
}
