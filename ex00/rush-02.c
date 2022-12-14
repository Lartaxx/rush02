/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:48:00 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/19 20:59:23 by rrodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	int	test;
	char	str[351];
	int	size;
	char	*nb = argv[1];

	if (argc != 2)
		return 0;
	test = open("numbers.dict.txt", O_RDONLY);
	size = read (test, str, 350);
	str[size] = 0;
	ft_printint(nb, str);
	close (test);
	return 0;
} 
