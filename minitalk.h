/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:54:47 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/12 16:42:44 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_navi_to_next(char c, int p);
int     ft_isvalid(char *av);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *S);
int		ft_atoi(char *nbr);

#endif
