/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:48:45 by azgaoua           #+#    #+#             */
/*   Updated: 2023/05/15 16:28:16 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_messageback_bns(int sgnl);
void	handler_bns(int si, siginfo_t *pi, void *cont);
void	ft_navi_to_next_bns(char c, int p);
int		ft_isvalid_bns(char *av);
void	ft_putnbr_bns(int nb);
void	ft_putchar_bns(char c);
int		ft_atoi_bns(char *nbr);

#endif
