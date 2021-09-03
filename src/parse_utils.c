/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 06:40:11 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 01:24:04 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


// static void *init_data(t_data *data, char *input)
// {
// 	if(data->)
// }

// static t_cmd *init_cmd()
// {
// 	t_cmd *temp;
// 	temp->cmd = NULL;
// 	temp->options = NULL;
// 	return temp;
// }
t_data *parse_data(char *input)
{
	// TO-DO 파이프라인을 적용하면 |을 기준으로 명령어를 나눈다. 
	t_data *data;
	char **temp;
	int i;

	temp = ft_split(input, '|');
	i = -1;
	while (temp[++i])
		printf("%s\t", temp[i]);
	data = NULL;
	return data;
	// init_data(data, input);
	
}