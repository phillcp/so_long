/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:50:52 by phill             #+#    #+#             */
/*   Updated: 2022/03/12 01:47:37 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "so_long.h"

void	err_exit(char *err, t_app *app)
{
	void(app);
	ft_putstr_fd("Error\n", 1);
	ft_putstr_fd(err, 1);
	ft_putchar_fd('\n', 1);
	exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
	t_app	*app;

	if (argc != 2)
	{
		err_exit("Error\nOnly perameter should be the map.", NULL);
		return (1);
	}
	app = ft_calloc(1, sizeof(t_app));
	if (init(app, argv[1]))
		err_exit("init failed", app);
	first_frame(app);
}
