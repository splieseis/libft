/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:02:22 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 16:39:17 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a_dst;
	unsigned char	*a_src;
	int				i;

	a_dst = (unsigned char *)dst;
	a_src = (unsigned char *)src;
	i = 0;
	while (i < n && (int)src[i] != c)
	{
		a_dst[i] = a_src[i];
		i++;
	}
	return (dst);
}
/*
** int main(void)
** {
**	char a[] = "1121";
**	char b[] = "0000";
**	printf("%s\n", (char *)ft_memccpy(b, a, '2', 4));
**	return (0);
** }
*/
