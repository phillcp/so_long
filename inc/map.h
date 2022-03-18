/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:09:31 by phill             #+#    #+#             */
/*   Updated: 2022/03/14 21:47:34 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "so_long.h"

# define SIZE 64
# define MAP_CHARS "01ECPB"
# define MAP "./map.ber"

# define BG '0'
# define WALL '1'
# define EXIT 'E'
# define COLL 'C'
# define PLAYER 'P'
# define ENEMY 'B'

# define TEXCOLL "./textures/xpm/coll.xpm"
# define TEXENEMY0 "./textures/xpm/enemy.xpm"
# define TEXENEMY1 "./textures/xpm/enemy1.xpm"
# define TEXENEMY2 "./textures/xpm/enemy2.xpm"
# define TEXENEMY3 "./textures/xpm/enemy3.xpm"
# define TEXEXIT "./textures/xpm/exit.xpm"
# define TEXBG "./textures/xpm/floor.xpm"
# define TEXPLAYER "./textures/xpm/player.xpm"
# define TEXPLAYER1 "./textures/xpm/player1.xpm"
# define TEXWALL "./textures/xpm/wall.xpm"

#endif
