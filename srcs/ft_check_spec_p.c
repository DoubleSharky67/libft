/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:07:20 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:18:12 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_p(char spec, va_list args)
{
	unsigned long ptr;

	if (spec == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if (ptr == 0)
		{
			ft_putstr_fd("(nil)", 1);
			return (5);
		}
		ft_putstr_fd("0x", 1);
		ft_putnbr_base_fd(ptr, "0123456789ABCDEF", 1);
		return (14);
	}
	return (ft_check_spec_d_i(spec, args));
}
