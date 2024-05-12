/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:43:58 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/29 14:14:12 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	calc_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*create_str(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*s;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += calc_len(strs[i]);
		i++;
	}
	if (size > 0)
		len += calc_len(sep) * (size - 1);
	len += 1;
	s = (char *)malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		x;
	int		j;
	char	*s;

	i = 0;
	x = 0;
	s = create_str(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			s[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			s[x++] = sep[j++];
		i++;
	}
	s[x] = '\0';
	return (s);
}
