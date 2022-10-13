/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:27:28 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:13:11 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_s(char spec, va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (spec == 's')
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	return (ft_check_spec_p(spec, args));
}
