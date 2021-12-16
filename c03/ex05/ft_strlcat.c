/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 07:01:51 by mel-hada          #+#    #+#             */
/*   Updated: 2021/08/13 07:01:56 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dt;
	unsigned int	j;
	unsigned int	sc;

	dt = 0;
	j = 0;
	sc = 0;
	while (dest[dt])
		dt++;
	while (src[sc])
		sc++;
	if (size <= dt)
		sc += size;
	else
		sc += dt;
	while (src[j] && dt + 1 < size)
		dest[dt++] = src[j++];
	dest[dt] = '\0';
	return (sc);
}
