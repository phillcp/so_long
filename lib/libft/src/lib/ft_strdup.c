/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:16:41 by marvin            #+#    #+#             */
/*   Updated: 2022/03/14 21:24:10 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	str1 = malloc(i + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
