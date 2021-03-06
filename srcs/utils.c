/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:43:59 by reda-con          #+#    #+#             */
/*   Updated: 2019/02/14 12:44:00 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

float	square(float n)
{
	return (n * n);
}

double	percent(int start, int end, int act)
{
	double	plc;
	double	dist;

	plc = act - start;
	dist = end - start;
	return ((dist == 0) ? 1.0 : (plc / dist));
}

void	reload(t_fract *fract)
{
	if (fract->type == 1)
		mandel(fract);
	else if (fract->type == 2)
		julia(fract);
	else if (fract->type == 3)
		barnsley(fract);
}
