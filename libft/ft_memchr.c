/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:11:46 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:36:03 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alias;
	size_t			i;

	alias = (unsigned char *)s;
	i = 0;
	while (alias[i] && i < n)
	{
		if (alias[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

/*
** int main(void)
** {
**	char a[] = "aerysghytew";
**	printf("%s\n", (char *)ft_memchr(a, 'g', 5));
**	return (0);
** }
*/
