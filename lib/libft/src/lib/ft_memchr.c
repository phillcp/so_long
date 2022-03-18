/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:39:53 by marvin            #+#    #+#             */
/*   Updated: 2022/03/06 22:06:54 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
