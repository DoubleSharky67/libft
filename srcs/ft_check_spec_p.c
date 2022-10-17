/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:07:20 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 20:02:22 by ffeaugas         ###   ########.fr       */
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
			ft_putstr("(nil)");
			return (5);
		}
		ft_putstr("0x");
		ft_putnbr_base(ptr, "0123456789abcdef");
		return (14);
	}
	return (ft_check_spec_d_i(spec, args));
}
