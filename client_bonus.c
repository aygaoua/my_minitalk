/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:45:23 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/15 16:40:40 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_messageback_bns(int sgnl)
{
	if (sgnl == SIGUSR2)
		write (1, "signal is resived with succes\n", 31);
	exit(0);
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*tosend;
	int		i;

	signal(SIGUSR2, ft_messageback_bns);
	if (argc != 3 || !ft_isvalid_bns(argv[1]))
		return (-1);
	pid = ft_atoi_bns(argv[1]);
	tosend = argv[2];
	i = 0;
	while (tosend[i])
		ft_navi_to_next_bns(tosend[i++], pid);
	ft_navi_to_next_bns(0, pid);
	pause ();
	return (0);
}

void	ft_navi_to_next_bns(char c, int p)
{
	int	i;

	i = 8;
	while (i > 0)
	{
		kill(p, SIGUSR1 + (c >> --i & 1));
		usleep(800);
	}
}

int	ft_isvalid_bns(char *av)
{
	int		i;

	i = 0;
	if (av[i] == '0')
	{
		write(2, "wrong PID \"zero at first !!\"", 29);
		return (0);
	}
	while (av[i])
	{
		if (av[i] != '\0' && av[i] >= '0' && av[i] <= '9')
			i++;
		else
		{
			if (av[i] == '+' || av[i] == '-')
				write(2, "wrong PID \"remove signe !!\"", 28);
			else if (av[i] == ' ')
				write(2, "wrong PID \"remove space !!\"", 28);
			else
				write(2, "some thing wrong on your PID", 28);
			return (0);
		}
	}
	return (1);
}
