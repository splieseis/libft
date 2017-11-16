/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:33:38 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:36:57 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a_dst;
	unsigned char	*a_src;
	size_t			i;
	char			tmp[sizeof(src)];

	a_dst = (unsigned char *)dst;
	a_src = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		tmp[i] = a_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		a_dst[i] = tmp[i];
		i++;
	}
	return (dst);
}

/*
** int main(void)
** {
**	char a[] = "1234";
**	//char b[] = "0000";
**	printf("%s\n", (char *)ft_memmove(&a[0], &a[1], 2));
**	return (0);
** }
*/
