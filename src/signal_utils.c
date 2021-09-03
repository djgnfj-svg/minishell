/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 06:34:35 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 01:05:04 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


// void		handle_signal(int signo)
// {
// 	pid_t	pid;
// 	int		status;

// 	pid = waitpid(-1, &status, WNOHANG);
// 	if (signo == SIGINT)
// 	{
// 		if (pid == -1)
// 		{
// 			ft_putstr_fd("\b\b  \b\b\n", 2);
// 			show_prompt();
// 			// g_exit_status = 1;
// 		}
// 		else
// 			ft_putchar_fd('\n', 2);
// 	}
// 	else if (signo == SIGQUIT)
// 	{
// 		if (pid == -1)
// 			ft_putstr_fd("\b\b  \b\b", 2);
// 		else
// 			ft_putstr_fd("Quit: 3\n", 2);
// 	}
// }