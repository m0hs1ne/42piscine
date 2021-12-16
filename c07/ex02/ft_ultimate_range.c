/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:30:12 by mel-hada          #+#    #+#             */
/*   Updated: 2021/08/25 10:58:08 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	r;
	int	i;
	int	*b;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	r = max - min - 1;
	b = malloc(r * sizeof(int));
	if (b == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = b;
	i = 0;
	while (i <= r)
	{
		b[i] = min + i;
		i++;
	}
	return (r + 1);
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
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	print(range, bound + 2);
}*/
