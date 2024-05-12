/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:11:51 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/29 13:19:11 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*s;
	int	sub;
	int	i;

	i = 0;
	sub = max - min;
	if (min >= max)
		return (NULL);
	s = (int *)malloc(sizeof(int) * sub);
	if (s == NULL)
		return (NULL);
	while (min < max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);
}
