/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:14:37 by mel-hada          #+#    #+#             */
/*   Updated: 2021/08/16 10:54:09 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_to_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_ver_bas(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_print_base(int nb, unsigned int base_nb, char *base)
{
	unsigned int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		number = -nb;
	}
	else
		number = nb;
	if (number >= base_nb)
		ft_print_base(number / base_nb, base_nb, base);
	ft_putchar(base[number % base_nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_nb;

	base_nb = ft_to_base(base);
	if (base_nb > 1)
		ft_print_base(nbr, base_nb, base);
}
