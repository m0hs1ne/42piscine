/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:02:32 by mel-hada          #+#    #+#             */
/*   Updated: 2021/08/19 12:05:09 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_comp(char **av)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			k = 0;
			while (av[j][k] && av[i][k] && av[i][k] == av[j][k])
				k++;
			if (av[i][k] - av[j][k] > 0)
			{
				av[0] = av[i];
				av[i] = av[j];
				av[j] = av[0];
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		ft_comp(av);
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
