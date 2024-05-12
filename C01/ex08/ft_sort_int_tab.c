/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:49:31 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/16 13:28:25 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	temp;
	int	swap;

	end = size - 1;
	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < end)
		{
			if (tab[i] > tab[i +1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
	}
}
