/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:01:08 by spliesei          #+#    #+#             */
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

static int	ft_strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int lenght;
	char *ret;
	int i;

	lenght = (ft_strlen(s1) + ft_strlen(s1));
	ret = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!ret)
		return (NULL);
	ret[lenght] = '\0';
	i = 0;
	while (*s1)
	{
		ret[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		ret[i++] = *s2;
		s2++;
	}
	return (ret);
}

int main(void)
{
	char *s1 = "1234";
	char *s2 = "567890";
	ft_putstr1(ft_strjoin(s1, s2));
	return (0);
}
