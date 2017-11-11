/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:53:26 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/11 15:23:08 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int i;
	int len;

	i = 0;
	len = n;
	while ((s1[i] == s2[i]) && i < (len - 1))
	{
		ft_print_digits('a');
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}
