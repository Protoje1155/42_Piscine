/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:33:07 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/21 16:20:12 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	j = 0;
	x = 0;
	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && x < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		x++;
	}
	dest[i] = 0;
	return (dest);
}
