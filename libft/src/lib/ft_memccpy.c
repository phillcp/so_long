/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:12 by marvin            #+#    #+#             */
/*   Updated: 2022/03/06 21:18:25 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	a = 0;
	if (dst == src)
		return (dst);
	while (a < n)
	{
		s1[a] = s2[a];
		if (s1[a] == (unsigned char)c)
			return ((void *)(s1 + a + 1));
		a++;
	}
	return (NULL);
}
