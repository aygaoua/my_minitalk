/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:34:44 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/14 15:42:30 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int si, siginfo_t *pi, void *cont)
{
	static char	c;
	static int	i;
	static int	p_i_d;

	(void)cont;
	if (p_i_d != pi->si_pid)
	{
		p_i_d = pi->si_pid;
		c = 0;
		i = 0;
	}
	c = (c << 1) | (si & 1);
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	struct sigaction	act;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = handler;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	write (1, "PID: ", 5);
	ft_putnbr(getpid());
	write (1, "\n", 1);
	while (0 == 0)
		pause();
	return (0);
}
