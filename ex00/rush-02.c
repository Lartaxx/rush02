/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:12:41 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/19 11:40:04 by rrodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

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

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	test;
	char	str[351];
	int 	size;
	char	*nb = argv[1];
	char	*res;
	int	i;

	if (argc != 2)
		return 0;
	i = 0;
	test = open("numbers.dict.txt", O_RDONLY);
	size = read (test, str, 350);
	str[size] = 0;
	res = ft_strstr(str, nb);
	if (res == 0)
		write(1, "Dict Error\n", 11);
	else
	{
		i += ft_strlen(nb) + 2;
		while (res[i] != '\n')
		{
			write(1, &res[i], 1);
			i++;
		}
	}
	close (test);
	return 0;
}
