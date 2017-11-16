/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:38:38 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:38:37 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	printf("test:%s\n", dst);
	return (sizeof(dst) - 1);
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
