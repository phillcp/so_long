/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:57:44 by phill             #+#    #+#             */
/*   Updated: 2022/03/12 01:47:35 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init(t_app *app, const char *file)
{
	app->mlx = mlx_init();
	if (!app->mlx)
		err_exit("mlx initiation failed", app);
}
