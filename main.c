/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:36:09 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/18 00:00:40 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int main(void)
{
	int a;
	int b;

	a = 180;
	printf("FT_PRINTF :\n");
	b = ft_printf("%X gougou %s\n", a, "BZZZ");
	ft_printf("b : %d\n", b);
	printf("\nPRINTF :\n");
	b = printf("%X gougou %s\n", a, "BZZZ");
	printf("b : %d\n", b); 
}
