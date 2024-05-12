/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:33:16 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/24 14:00:05 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	valid_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	j = 1;
	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	calculate_len(char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_convert(int nbr, char *base, char *base2)
{
	int		len;
	int		i;
	long	l_nbr;

	i = 0;
	l_nbr = (long)nbr;
	if (nbr < 0)
		l_nbr = -l_nbr;
	len = calculate_len(base);
	if (l_nbr == 0)
		base2[i++] = base[0];
	else
	{
		while (l_nbr != 0)
		{
			base2[i++] = base[l_nbr % len];
			l_nbr /= len;
		}
	}
	if (nbr < 0)
		base2[i++] = '-';
	base2[i] = '\0';
}

void	ft_print_rev(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len > 0)
	{
		write(1, &s[len] - 1, 1);
		len--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	base2[100];

	if (valid_base(base))
	{
		ft_convert(nbr, base, base2);
		ft_print_rev(base2);
	}
}
