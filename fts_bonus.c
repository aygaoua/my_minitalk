/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:46:23 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/15 16:31:49 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_putchar_bns(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_bns(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar_bns((char)(nb + 48));
	else if (nb > 0)
	{
		ft_putnbr_bns(nb / 10);
		ft_putnbr_bns(nb % 10);
	}
}

int	ft_atoi_bns(char *nbr)
{
	int		i;
	long	retu;

	i = 0;
	retu = 0;
	while (nbr[i] != '\0' && nbr[i] >= '0' && nbr[i] <= '9')
	{
		retu = (retu * 10) + nbr[i] - 48;
		if (retu >= 4294967295)
			return (-1);
		i++;
	}
	return ((int )retu);
}
