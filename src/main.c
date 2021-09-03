/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 04:06:47 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 01:23:15 by ysong            ###   ########.fr       */
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
			test(temp);
			data = parse_data(temp);
			(void)data;
			// printf("%s\n",data->cmd.options);
			// run_commend(temp, env);
		}
	}
	(void)env;
}

int main(int ac, char **av, char **env)
{
	minishell(env);
	return (0);
	(void)av;
	(void)ac;
} 
// #include <unistd.h>
// #include <stdlib.h>
// int main()
// {
// 	char buffer[128];
// 	int nread;
// 	nread = read( 0, buffer, 128 );
// 	if( nread == -1 )
// 		write( 2, "A read error has occurred\n", 26 );
// 	if( (write( 1, buffer, nread ) ) != nread ) //1번 (표준출력)으로 write == printf 와 동일한 역할
// 		write( 2, "A write error has occurred\n", 27 );
// 	exit(0);
// }
