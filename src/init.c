/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:57:44 by phill             #+#    #+#             */
/*   Updated: 2022/03/14 20:51:55 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	screen_init(t_app *app)
{
	app->screen.width = SIZE * app->game.width;
	app->screen.height = SIZE * app->game.height;
	app->screen.win = mlx_new_window(app->mlx, app->screen.width, \
		app->screen.height, "so_long");
	app->screen.img = ft_calloc(1, sizeof(*app->screen.img));
	app->screen.img->img = mlx_new_image(app->mlx, app->screen.width, \
		app->screen.height);
	app->screen.img->addr = mlx_get_data_addr(app->screen.img->img, \
		&app->screen.img->bpp, &app->screen.img->line_len, \
			&app->screen.img->endian);
}

int	init(t_app *app, const char *file)
{
	app->mlx = mlx_init();
	if (!app->mlx)
		err_exit("mlx_init FAILED", app);
	read_map(app, file);
	screen_init(app);
	return (0);
}

void	first_frame(t_app *app)
{
	app->screen.frame_count = 1;
	render_out_walls(app);
	render_bg(app);
	render_in_walls(app);
	render_coll(app);
	render_enemies(app);
	render_exit(app);
}
