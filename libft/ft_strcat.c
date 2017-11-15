/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:47:52 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/15 14:18:29 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}

/*int main (void)
{
	char s[20] = "Hallo";
	char d[] = "-Wien";
	printf("real: %s\n", strcat(s, d));
	printf("mine: %s\n", ft_strcat(s, d));
	return (0);
}*/
