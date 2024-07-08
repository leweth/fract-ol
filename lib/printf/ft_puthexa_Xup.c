/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_Xup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:10:58 by mben-yah          #+#    #+#             */
/*   Updated: 2024/07/08 12:10:15 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_xup(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_puthexa(num, "0123456789ABCDEF"));
}
