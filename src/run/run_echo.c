/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 06:51:07 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 14:23:11 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void run_echo(t_data *data, char **env)
{
	char **temp;
	int i;
	char **buff;
	
	i = 0;
	buff = ft_split(data->cmd->buff, ' ');
	while(buff[i])
		i++;
	temp = (char **)malloc(sizeof(char *) * i);
	temp[0] = data->cmd->commend;
	i = 1;
	buff = ft_split(data->cmd->buff, ' ');
	while(buff[i])
	{
		temp[i] = buff[i];
		i++;
	}
	temp[i] = NULL;
	if(execve("/bin/echo", temp ,env) == -1)
	{
		fprintf(stderr, "에러 %s\n", strerror(errno));
	}
}