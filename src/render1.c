/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:42:52 by phill             #+#    #+#             */
/*   Updated: 2022/03/14 21:56:16 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render_exit(t_app *app)
{
	int	x;
	int	y;

	x = -1;
	y = -1;
	while (++y < app->game.height)
	{
		while (++x < app->game.width)
			if (app->game.map[y][x] == EXIT)
				place_img(app, EXIT, (t_pos){.x = x, .y = y});
		x = 0;
	}
}

void	render_player(t_app *app)
{
	static int	ff = 1;
	static int	x = 0;
	static int	y = 0;

	if (ff)
	{
		ff = 0;
		x = app->game.player.x;
		y = app->game.player.y;
	}
	if (x != app->game.player.x || y != app->game.player.y)
	{
		place_img(app, BG, (t_pos){x, y});
		x = app->game.player.x;
		y = app->game.player.y;
	}
	place_img(app, BG, (t_pos){.x = x, .y = y});
	place_img(app, PLAYER, (t_pos){x, y});
}

void	render_steps(t_app *app)
{
	char	*str;
	char	*str2;

	str = ft_itoa(app->game.steps);
	str2 = ft_strjoin("Steps: ", str);
	mlx_string_put(app->mlx, app->screen.win, 1, 10, 0x00FFFFFF, str2);
	free(str);
	free(str2);
}

int	update(t_app *app)
{
	app->screen.frame_count++;
	frame(app);
	render_player(app);
	render_coll(app);
	render_enemies(app);
	mlx_put_image_to_window(app->mlx, app->screen.win, app->screen.img->img, \
		0, 0);
	render_steps(app);
	return (1);
}
