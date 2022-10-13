/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_X.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:14:09 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:20:11 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_X(char spec, va_list args)
{
	(void)args;
	(void)spec;
	ft_putchar_fd('X', 1);
	return (1);
}
