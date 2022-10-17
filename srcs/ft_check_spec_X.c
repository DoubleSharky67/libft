/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_X.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:14:09 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 23:54:14 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_X(char spec, va_list args)
{
	(void) spec;
	long long nb;
	nb = va_arg(args, unsigned int);
	ft_putnbr_base(nb, "0123456789ABCDEF");
	return (ft_nbexlen(nb));
}
