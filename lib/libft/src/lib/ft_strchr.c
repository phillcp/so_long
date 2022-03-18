/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:26:39 by marvin            #+#    #+#             */
/*   Updated: 2022/03/14 21:16:54 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	if (!s)
		return (NULL);
	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == (unsigned char)c)
			return ((char *)s + a);
		a++;
	}
	if (c == '\0')
		return ((char *)s + a);
	return (NULL);
}
