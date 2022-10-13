/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:12:39 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:18:48 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

static int	ft_nblen(unsigned int ui)
{
	long div;
	int counter;

	div = 10;
	counter = 1;
	while (ui % div != 0)
	{
		div *= 10;
		counter++;		
	}
	return (counter);
}

int ft_check_spec_u(char spec, va_list args)
{
	unsigned int	ui;

	if (spec == 'u')
	{
		ui = va_arg(args, unsigned int);
		ft_putnbr_fd(ui, 1);
		return (ft_nblen(ui));
	}
	return (ft_check_spec_x(spec, args));
}
