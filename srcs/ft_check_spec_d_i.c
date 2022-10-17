/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_d_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:10:37 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 23:41:58 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_d_i(char spec, va_list args)
{
	int nb;

	if (spec == 'd' || spec == 'i')
	{
		nb = va_arg(args, int);
		ft_putnbr(nb);
		return (ft_nblen(nb));
	}
	return (ft_check_spec_u(spec, args));
}
