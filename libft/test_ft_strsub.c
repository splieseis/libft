/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:59:38 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/14 13:09:19 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr1(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;
	int i;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	i = 0;
	while (len > 0)
	{
		ret [i++] = s[start];
		start++;
		len--;
	}
	return (ret);
}

int main(void)
{
	char *s1 = "Hallo, this is a test string";
	ft_putstr1(ft_strsub(s1, 0, 9));
	return (0);
}
