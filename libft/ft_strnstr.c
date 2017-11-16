/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 09:56:43 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:41:09 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_needle(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < len)
		i++;
	if (!s2[i])
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t size;
	int i;

	size = ft_strlen(needle);
	if (size > len)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_needle(&haystack[i], needle, len - i))
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
** char *needle = "allo";
** printf("%s\n", ft_strnstr(haystack, needle, 5));
** printf("%s\n", strnstr(haystack, needle, 5));
** return (0);
** }
*/
