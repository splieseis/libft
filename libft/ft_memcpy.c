/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:08:57 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/15 16:11:31 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{

}
int main(void)
{
	char a[] = "1111";
	char b[] = "0000";
	printf("%s\n", (char *)ft_memcpy(b, a, 2));
	return (0);
}
