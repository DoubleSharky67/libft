/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:12:39 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 23:42:17 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_u(char spec, va_list args)
{
	unsigned int	ui;

	if (spec == 'u')
	{
		ui = va_arg(args, unsigned int);
		ft_putnbr(ui);
		return (ft_nblen(ui));
	}
	return (ft_check_spec_x(spec, args));
}
