/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:25:00 by mel-hada          #+#    #+#             */
/*   Updated: 2021/08/25 10:41:04 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_roll(char *r, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			r[n] = strs[i][j];
			n++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			r[n] = sep[j];
			j++;
			n++;
		}
		i++;
	}
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*s;

	if (size <= 0)
	{
		s = (char *)malloc(sizeof(char));
		*s = '\0';
	}
	else
	{
		i = 0;
		len = (size - 1) * ft_strlen(sep);
		while (i < size)
		{
			len += ft_strlen(strs[i]);
			i++;
		}
		s = (char *)malloc(sizeof(char) * len + 1);
		s = ft_roll(s, strs, size, sep);
		s[len] = '\0';
		return (s);
	}
	return (s);
}
/*int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		index++;
	}
}*/
