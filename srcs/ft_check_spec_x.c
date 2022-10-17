/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:13:33 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 23:54:46 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_x(char spec, va_list args)
{
	long long nb;

	if (spec == 'x')
	{
		nb = va_arg(args, unsigned int);
		ft_putnbr_base(nb, "0123456789abcdef");
		return (ft_nbexlen(nb));
	}
	return (ft_check_spec_X(spec, args));
}
