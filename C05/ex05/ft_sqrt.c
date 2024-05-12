/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:39:02 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/27 12:34:14 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	while (root * root <= nb && root <= 46340)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
