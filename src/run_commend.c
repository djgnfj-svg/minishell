/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 04:42:01 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 14:14:56 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// echo, cd, pwd, export, unset, env, exit
void	run_commend(t_data *data, char **env)
{
	if(!ft_strcmp(data->cmd->commend, "echo"))
		run_echo(data, env);
	// else if(ft_strcmp(data->cmd->commend, "cd "))
	// 	run_cd();
	else if(!ft_strcmp(data->cmd->commend, "pwd"))
		run_pwd();
	// else if(ft_strcmp(data->cmd->commend, "export"))
	// 	run_export();
	// else if(ft_strcmp(data->cmd->commend, "unset"))
	// 	run_unset();
	else if(!ft_strcmp(data->cmd->commend, "env"))
		run_env(env);
	// else if(ft_strcmp(data->cmd->commend, "exit"))
	// 	run_exit();
	// else
	// 	print_error();
}
