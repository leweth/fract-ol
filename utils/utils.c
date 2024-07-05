/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:24:44 by mben-yah          #+#    #+#             */
/*   Updated: 2024/07/05 11:42:05 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

t_complex	quad_iter(t_complex z, t_complex c)
{
	return (c_sum(c_pow(z), c));
}

t_complex	rescale(t_complex z)
{
	t_complex	z0;

	z0.x = (((z.x - 0.0) * (+2 - (-2)) / (WIDTH - 0)) + (-2));
	z0.y = (((z.y - 0.0) * (+2 - (-2)) / (HEIGHT - 0)) + (-2));
	return (z0);
}
