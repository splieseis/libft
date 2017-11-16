/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:15:46 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:08:16 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_needle(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (!s2[i])
		return (1);
	return (0);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len;
	int i;

	len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_needle(&haystack[i], needle))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*
** int main (void)
** {
** char *haystack = "Hallo I'm a working function.";
** char *needle = "I'm a working function.";
** printf("%s\n", ft_strstr(haystack, needle));
** printf("%s\n", strstr(haystack, needle));
** return (0);
** }
*/
