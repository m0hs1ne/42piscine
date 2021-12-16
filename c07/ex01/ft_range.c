/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:29:21 by mel-hada          #+#    #+#             */
/*   Updated: 2021/08/25 10:54:00 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	r;
	int	i;
	int	*b;

	if (min >= max)
		return (0);
	r = max - min - 1;
	b = malloc(r * sizeof(int));
	if (b == NULL)
		return (0);
	i = 0;
	while (i <= r)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
/*void	print(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;

	min = -5;
	max = 2;
	printf("min = %d, max = %d -> ", min, max);
	print(ft_range(min, max), max - min);
}*/
