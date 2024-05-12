/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:14:44 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/14 15:04:39 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_all(int a, int b, int c, int d)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(' ');
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	if (!(a == 9 && b == 8 && c == 9 && d == 9))
	{	
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = -1;
	while (a++ <= 8)
	{
		b = -1;
		while (b++ <= 8)
		{
			c = -1;
			while (c++ <= 8)
			{	
				d = -1;
				while (d++ <= 8)
				{
					if (a * 10 + b < c * 10 + d)
						ft_print_all(a, b, c, d);
				}
			}
		}
	}
}
