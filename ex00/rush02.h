/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:49:04 by rrodor            #+#    #+#             */
/*   Updated: 2022/11/19 21:12:34 by rrodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_printint(char *nb, char *str);
char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
void	ft_printcent(char *str);
void	ft_printcentaine(char n, char *str);

#endif
