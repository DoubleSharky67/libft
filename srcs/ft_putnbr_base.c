/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:16:43 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 19:40:46 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

void	ft_putnbr_base(long long nb, char *base)
{
	char	c;
	long long	nbr;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	nbr = (long long)nb;
	if (nbr >= ft_strlen(base))
		ft_putnbr_base(nbr / ft_strlen(base), base);
	c = base[nbr % ft_strlen(base)];
	ft_putchar(c);
}
