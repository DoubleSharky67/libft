/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:58:44 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 19:14:51 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_c(char spec, va_list args)
{
	if (spec == 'c')
	{
		ft_putchar(va_arg(args, int));
		return (1);
	}
	return (ft_check_spec_s(spec, args));
}
