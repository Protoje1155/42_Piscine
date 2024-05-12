/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:22:03 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/25 16:39:09 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	minus_counter(char *str)
{
	int	minus_count;
	int	i;

	i = 0;
	minus_count = 0;
	while ((str[i] != '\0') && (str[i] >= 32 && str[i] <= 47))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	return (minus_count);
}

int	ft_atoi(char *str)
{
	int	minus_or_plus;
	int	result;
	int	i;

	minus_or_plus = 1;
	i = 0;
	result = 0;
	while ((str[i] != '\0') && (str[i] >= 32 && str[i] <= 47))
		i++;
	if (minus_counter(str) % 2 != 0)
		minus_or_plus = -minus_or_plus;
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= minus_or_plus;
	return (result);
}
