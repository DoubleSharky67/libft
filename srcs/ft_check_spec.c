/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:45:25 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:12:55 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int	ft_check_spec(char spec, va_list args)
{
	if (spec == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (ft_check_spec_c(spec, args));
}
