/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:11:26 by phill             #+#    #+#             */
/*   Updated: 2022/03/12 01:47:43 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include "get_next_line.h"
# include "mlx.h"
# include "mlx_keys.h"
# include "map.h"

typedef struct	s_pos
{
	int	x;
	int	y;
}				t_pos;
typedef struct	s_img
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}				t_img;

typedef struct	s_screen
{
	void	*win;
	int		width;
	int		height;
	int		frame_count;
	t_img	*img;
}				t_screen;

typedef struct	s_entit
{
	int	x;
	int	y;
	int	dir;
	int	dead;
}				t_entit;

typedef struct	s_game
{
	int			width;
	int			height;
	int			colls;
	int			exits;
	int			steps;
	char		**map;
	int			en_count;
	t_entit		player;
	t_entit		*enemy;
}				t_game;

typedef struct	s_app
{
	void		*mlx;
	t_screen	screen;
	t_game		game;
}				t_app;

#endif
