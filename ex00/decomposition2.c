/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decomposition2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:17:16 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/19 21:46:57 by rrodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printsimple(char n, 
void	ft_printdis(char n1, char n2, char *str)
{
	char n[1];
	int	nb;

	n[0] = n1;
	n[1] = n2;
	nb = ft_atoi(n)
	if (nb >= 0 && nb <= 0)
		ft_printsimple(nb, str);
	else
	{
		if ((nb % 10) == 0)
			ft_printsimple(nb, str);
		else
		{
			a = nb % 10;
			b = nb - a;
			ft_printsimple(b, str);
			ft_printsimple(a, str);
		}
	}
}
