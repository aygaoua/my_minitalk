/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:28:23 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/11 18:28:27 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char **argv)
{
    int     pid;
    char    *tosend;
    int     i;

    if (argc != 3 || !ft_isvalid(argv[1]))
        return (-1);
    pid = ft_atoi(argv[1]);
    tosend = argv[2];
    i = 0;
    while (tosend[i])
        ft_navi_to_next(tosend[i++], pid);
    
}

void    ft_navi_to_next(char c, int p)
{
    int i;

    i = 8;
    while (i > 0)
    {
        kill(p, SIGUSR1 + (c >> --i & 1));
        usleep(500);
    }
}

int ft_isvalid(char *av)
{
    int i;
    
    i = 0;
    if(av[i] == '0')
        return (0);
    while (av[i])
    {
        if(av[i] != '\0' && av[i] >= '0' && av[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}