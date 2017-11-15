/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:49:23 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/15 15:55:09 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *alias;
	int i;

	alias = s;
	i = 0;
	while (i < n)
		alias[i++] = 0;
}

/*int main(void)
{
	char b[] = "asdf";
	ft_bzero(b, 3);
	printf("%s\n", b);
	return (0);
}*/
