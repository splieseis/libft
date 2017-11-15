/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:15:10 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/14 21:15:17 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
	{
		if (s[i + 1] == c)
			return ((char *)&s[i]);
		else
			return (NULL);
	}
}
/*
int main (void)
{
	char *s = "Hallo I'm a working function.";
	printf("%s\n", ft_strchr(s, '\0'));
	printf("%s\n", strchr(s, '\0'));
	return (0);
}*/
