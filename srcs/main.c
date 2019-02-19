/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:43:26 by reda-con          #+#    #+#             */
/*   Updated: 2019/02/14 12:43:27 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "../libft/includes/libft.h"
#include <mlx.h>
#include <stdlib.h>

int		error(void)
{
	ft_putendl_fd("usage: ./fractol <fractal you want>\n", 2);
	ft_putendl_fd("Availables fractals:\n-Mandelbrot\n-Julia\n-Barnsley"
			, 2);
	exit(1);
	return (1);
}

int		main(int ac, char **av)
{
	t_fract		*fract;

	if (ac != 2)
		return (error());
	if (!(fract = init_fract(ft_strlowcase(av[1]))))
		return (error());
	reload(fract);
	get_ctrl(fract);
	mlx_loop(fract->mlx->ptr);
	return (0);
}
