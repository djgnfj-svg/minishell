/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 04:06:47 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 14:06:45 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void minishell(char **env)
{
	char *temp;
	t_data *data;
	// signal(SIGINT, handle_signal);
	// signal(SIGQUIT, handle_signal);
	while(1)
	{
		show_prompt();
		if(get_next_line(0,&temp) > 0)
		{
			data = parse_data(temp);
			run_commend(data, env);
			// write(1, data->cmd->commend, ft_strlen(data->cmd->commend));
			// write(1, "\n", 2);
			free(temp);
		}
	}
	free(temp);
	(void)env;
}

int main(int ac, char **av, char **env)
{
	minishell(env);
	return (0);
	(void)av;
	(void)ac;
} 
