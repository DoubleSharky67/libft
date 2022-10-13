/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_d_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:10:37 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:13:40 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

static int	ft_nblen(int nb)
{
	long div;
	int counter;

	div = 10;
	counter = 1;
	if (nb < 0)
		counter++;
	while (nb % div != 0)
	{
		div *= 10;
		counter++;		
	}
	return (counter);
}

int ft_check_spec_d_i(char spec, va_list args)
{
	int nb;

	if (spec == 'd' || spec == 'i')
	{
		nb = va_arg(args, int);
		ft_putnbr_fd(nb, 1);
		return (ft_nblen(nb));
	}
	return (ft_check_spec_u(spec, args));
}
