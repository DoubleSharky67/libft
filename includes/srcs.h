/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:08 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/13 17:15:35 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

#include "../libft/libft.h"
#include <stdarg.h>

int ft_check_spec(char spec, va_list args);
int	ft_check_spec_c(char spec, va_list args);
int	ft_check_spec_s(char spec, va_list args);
int	ft_check_spec_p(char spec, va_list args);
int	ft_check_spec_d_i(char spec, va_list args);
int	ft_check_spec_u(char spec, va_list args);
int	ft_check_spec_x(char spec, va_list args);
int	ft_check_spec_X(char spec, va_list args);

#endif
