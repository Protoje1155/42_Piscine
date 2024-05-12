/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:41:52 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/31 13:27:05 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sub;
	int	*s;
	int	i;

	sub = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	s = (int *)malloc(sizeof(int) * sub);
	if (s == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		s[i] = min;
		min++;
		i++;
	}
	*range = s;
	return (sub);
}
