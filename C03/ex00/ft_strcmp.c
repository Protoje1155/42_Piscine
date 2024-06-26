/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:01:56 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/19 12:05:46 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		else
			return (-1);
	}
	if (*s1 != 0)
		return (1);
	else if (*s2 != 0)
		return (-1);
	else
		return (0);
}
