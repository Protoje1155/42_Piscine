/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoster <mkoster@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:54:02 by mkoster           #+#    #+#             */
/*   Updated: 2024/01/25 15:20:36 by mkoster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_name(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < argc - 2)
	{
		j = 0;
		while (j < argc - 2 - i)
		{
			if (ft_strcmp(argv[j + 1], argv[j + 2]) > 0)
			{
				tmp = argv[j + 1];
				argv[j + 1] = argv[j + 2];
				argv[j + 2] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		print_name(argv[i]);
		i++;
	}
	return (0);
}
