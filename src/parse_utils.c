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

static void init_cmd(char *input, t_data *data)
{
	// - 받을때 까지 입력을 받고?
	// 아토이를 해서 받은 값이 명령어이면 추가
	// -? 이후의 값? 만약에 -가 없으면
	// 명령어만 추가 되는가?
	/*
	그러면 echo -1234이면
	어떡할 것인가?
	공백을 기준으로 쪼겠을때 [0]에 들어 있는 것이
	cmd이고 뒤에 있는 것이 옵션으로 저장된다.
	*/
	char *temp = ft_split(input, ' ');
	
	data->cmd = input;
}
t_data *parse_data(char *input)
{
	// TO-DO 파이프라인을 적용하면 |을 기준으로 명령어를 나눈다. 
	t_data *data;
	char **temp;
	int i;

	temp = ft_split(input, '|');
	i = -1;
	while (temp[++i])
		init_cmd(temp[i],data);
	data = NULL;
	return data;
	// init_data(data, input);
	
}