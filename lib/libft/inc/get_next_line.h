/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:31:21 by fheaton-          #+#    #+#             */
/*   Updated: 2022/03/14 21:27:55 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

# define FD_MAX 4096

# include "libft.h"
# include <unistd.h>
# include <sys/types.h>

int		get_next_line(int fd, char **line);
int		save_lines(char **lineread, char *buffer, char **line, \
	ssize_t nreadbytes);

#endif
