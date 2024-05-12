/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:39:57 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/21 16:51:30 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	temp_i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		temp_i = 0;
		while (str[temp_i] == to_find[temp_i] && to_find[temp_i] != '\0')
		{
			temp_i++;
		}
		if (to_find[temp_i] == '\0')
			return (str);
		str++;
	}
	return (0);
}
