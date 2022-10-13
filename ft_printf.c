/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:42:08 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:06:02 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	ft_is_spec(const char c)
{
	int i;
	char *specs;

	i = 0;
	specs = "cspdiuxX%";
	while (specs[i])
	{
		if (c == specs[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_check_error(const char *str)
{
	int i;

	if (str[ft_strlen(str)] == '%')
		return (1);
	i = 0;
	while (str[i + 1])
	{
		if (str[i] == '%' && !ft_is_spec(str[i + 1]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int i;
	int counter;
	va_list args;

	if (ft_check_error(str))
		return (0);
	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			counter++;
			i++;
		}
		else
		{
			counter += ft_check_spec(str[i + 1], args);
			i += 2;
		}
	}
	va_end(args);
	return (counter);
}
