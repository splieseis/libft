/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:07:42 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/14 13:07:54 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr1(char *s)
{
	int i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

void ft_printarr(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
	{
		ft_putstr1(arr[i]);
		i++;
	}
}

static int ft_countchars(char const *s, char c)
{
	int res;

	res = 0;
	while (*s)
	{
		if (*s != c)
			res++;
		s++;
	}
	return (res);
}

static int	ft_countwords(char const *s, char c)
{
	int res;
	int i;

	res = 0;
	i = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			res++;
		i++;
	}
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	int words;
	int len;
	char **ret;
	int i;
	int j;
	int k;

	len = ft_countchars(s, c);
	words = ft_countwords(s, c);
	ret = (char *)malloc(sizeof(char) * (len + words + 1));
	if (!ret)
		return (NULL);
	ret[words][0] = '\0';
	i = 0;
	k = 1;
	while (ret[i])
	{
		j = 0;
		while (s[k - 1] != c && (s[k - 1] == s[k] || s[k - 2] == s[k - 1])) //wrong!!!
		{
			ret[i][j] = s[k - 1];
			j++;
			k++;
		}
		ret[i][j + 1] = '\0';
		i++;
	}
	return (ret);
}

int main(void)
{
	ft_printarr(ft_strsplit("1111hello1fellow111students1", '1'));
	return (0);
}
