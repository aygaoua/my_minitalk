/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:34:57 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/12 16:03:53 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar((char)(nb + 48));
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putstr(char *S)
{
	unsigned int	j;

	if (!S)
		return ;
	j = 0;
	while (S[j])
	{
		ft_putchar(S[j]);
		j++;
	}
}

int	ft_atoi(char *nbr)
{
	int		i;
	long	retu;

	i = 0;
	retu = 0;
	if (nbr[i] == '+')
		i++;
	while (nbr[i] >= '0' && nbr[i] <= '9' && nbr[i] != '\0')
	{
		retu = (retu * 10) + nbr[i] - 48;
		if (retu > 4294967295)
			return (-1);
		i++;
	}
	return ((int )retu);
}
