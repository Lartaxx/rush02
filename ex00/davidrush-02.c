/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/11/19 20:19:09 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/19 20:21:39 by rrodor           ###   ########.fr       */
=======
/*   Created: 2022/11/19 10:12:41 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/19 19:16:48 by daboyer          ###   ########.fr       */
>>>>>>> 58c697f63bae5b01ecefc50bad1907861509e11f
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <fcntl.h>
<<<<<<< HEAD
=======
#include <unistd.h>
#include <stdlib.h>

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


char	*ft_atoi(char *str)
{
	int	i;
	int	j;
	char	*nb;

	nb = malloc (10 * sizeof(char));
	i = 0;
	j = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			nb[j] = '-';
			j++;	
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb[j] = str[i];
		i++;
		j++;
	}
	nb[j] = 0;
	return (nb);
}

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
>>>>>>> 58c697f63bae5b01ecefc50bad1907861509e11f


int	main(int argc, char **argv)
{
	int	test;
	char	str[351];
	int	size;
	char	*nb = argv[1];
<<<<<<< HEAD

	if (argc != 2)
		return 0;
=======
	char	*n = 0;
	char	*res;
	int	i;
	int	j;

	i = 0;
	j = 0;
>>>>>>> 58c697f63bae5b01ecefc50bad1907861509e11f
	test = open("numbers.dict.txt", O_RDONLY);
	n = ft_atoi(nb);
	size = read (test, str, 350);
	str[size] = 0;
<<<<<<< HEAD
	ft_printint(nb, str);
=======
	res = ft_strstr(str, n);
	if (res == 0)
		return (write(1, "Dict Error\n", 11));
	if (argc != 2)
		return (write(1, "Vous devez avoir un seul argument !", 35));
	else
	{
		i += ft_strlen(n) + 2;
		while ((argv[1][j] >= 48 && argv[1][j] <= 57))
		{
			while (res[i] != '\n')
			{
				write(1, &res[i], 1);
				i++;
			}
			j++;
		}
	}
>>>>>>> 58c697f63bae5b01ecefc50bad1907861509e11f
	close (test);
	return (0);
}
