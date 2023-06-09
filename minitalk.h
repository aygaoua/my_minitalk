/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:54:47 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/15 16:36:19 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

void	handler(int si, siginfo_t *pi, void *cont);
void	ft_navi_to_next(char c, int p);
int		ft_isvalid(char *av);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_atoi(char *nbr);

#endif
