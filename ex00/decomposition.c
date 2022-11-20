/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decomposition.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:43:24 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/19 21:20:21 by rrodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		k = i;
		j = 0;
		while (str[k] == to_find[j] && to_find[j])
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_printcent(char *str)
{
	char	*res;
	int		i;

	i = 5;
	res = ft_strstr(str, "100");
	while (res[i] != '\n')
	{
		write(1, &res[i], 1);
		i++;
	}
}

void	ft_printcentaine(char n, char *str)
{
	char	*res;
	int		i;
	char	nb[0];

	nb[0] = n;
	i = 0;
	if (nb[i] != '1')
	{
		res = ft_strstr(str, nb);
		if (res == 0)
			write(1, "Dict Error\n", 11);
		else
		{
			i += 3;
			while (res[i] != '\n')
			{
				write(1, &res[i], 1);
				i++;
			}
			write(1, " ", 1);
		}
	}
	ft_printcent(str);
}

void	ft_printint(char *nb, char *str)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(nb);
	while (nb[i])
	{
		l = ft_strlen(&nb[i]);
		if (l % 3 == 0)
		{
			ft_printcentaine(nb[i], str);
		}
		i++;
	}
}
