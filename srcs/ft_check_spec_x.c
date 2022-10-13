/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:13:33 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:13:58 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_x(char spec, va_list args)
{
	if (spec == 'x')
	{
		ft_putchar_fd('x', 1);
		return (1);
	}
	return (ft_check_spec_X(spec, args));
}
