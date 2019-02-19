/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:42:16 by reda-con          #+#    #+#             */
/*   Updated: 2019/02/14 12:42:20 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		++i;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}