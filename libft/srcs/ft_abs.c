/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:41:56 by reda-con          #+#    #+#             */
/*   Updated: 2019/02/14 12:41:57 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}