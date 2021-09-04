/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 06:40:11 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 07:15:54 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static t_data *init_cmd(char *input, t_data *data)
{
	char *temp;
	temp = ft_split(input, ' ')[0];
	data->cmd = (t_cmd *)malloc(sizeof(t_cmd));
	data->cmd->commend = temp;
	data->cmd->buff = input;
	data->next = NULL;
	return data;
}

t_data *parse_data(char *input)
{
	t_data *data;
	t_data *target_data;
	char **commnd_list;
	int i;

	commnd_list = ft_split(input, '|');
	i = 0;
	data = (t_data *)malloc(sizeof(t_data));
	data = init_cmd(input, data);
	while (commnd_list[++i])
	{
		target_data = init_cmd(commnd_list[i],data);
		data->next = target_data;
		data = data->next;
	}
	return data;
}