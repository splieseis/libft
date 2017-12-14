/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:38:38 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/13 21:16:23 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	while (dst[i] && i < size)
		i++;
	res = i + (size_t)ft_strlen(src);
	j = 0;
	while (i < size - 1 && src[j])
	{
		dst[i++] = src[j];
		j++;
	}
	while (i < size)
		dst[i++] = '\0';
	return (res);
}

/*
** int main(void)
** {
** char d[20] = "Hallo";
** char s[] = "-W";
** printf("mine:%lu\n", ft_strlcat(d, s, 5));
** printf("real:%lu\n", strlcat(d, s, 5));
** }
*/
