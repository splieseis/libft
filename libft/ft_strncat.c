/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:18:40 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/15 14:47:26 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j] && j < n)
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
	printf("mine: %s\n", ft_strncat(s, d, 4));
	printf("real: %s\n", strncat(s, d, 4));
	return (0);
}*/
