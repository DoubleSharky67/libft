/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:08 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 23:50:59 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

#include <stdarg.h>

int ft_check_spec(char spec, va_list args);
int	ft_check_spec_c(char spec, va_list args);
int	ft_check_spec_s(char spec, va_list args);
int	ft_check_spec_p(char spec, va_list args);
int	ft_check_spec_d_i(char spec, va_list args);
int	ft_check_spec_u(char spec, va_list args);
int	ft_check_spec_x(char spec, va_list args);
int	ft_check_spec_X(char spec, va_list args);

void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putnbr_base(long long nb, char *base);
void    ft_putstr(char *s);
int		ft_strlen(const char *s);
int		ft_nblen(long long nb);
int     ft_nbexlen(long long nb);

#endif
