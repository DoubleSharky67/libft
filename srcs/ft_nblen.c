/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:40:05 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 23:41:42 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nblen(long long nb)
{
	long div;
	int counter;

	div = 10;
	counter = 1;
	if (nb < 0)
		counter++;
	while (nb / div != 0)
	{
		div *= 10;
		counter++;		
	}
	return (counter);
}
