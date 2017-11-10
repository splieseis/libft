/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:00:56 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/10 13:01:31 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ret;
	unsigned char *c;
	int i;

	ret = (void *)malloc(size);
	if (!ret)
		return (NULL);
	c = ret;
	i = 0;
	while (i < size)
	{
		c[i] = 0;
		i++;
	}
	return (ret);
}
