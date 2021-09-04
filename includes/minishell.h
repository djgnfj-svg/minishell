/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 07:17:50 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 14:12:12 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include "../libft/libft.h"

typedef struct s_cmd
{
	char *commend;
	char *buff;
}				t_cmd;


typedef struct s_data
{
	t_cmd	*cmd;
	struct s_data *next;
}				t_data;

t_data		*parse_data(char *input);
void		show_prompt(void);
void		handle_signal(int signo);
void		run_commend(t_data *data, char **env);
void 		run_echo(t_data *data, char **env);
void		run_env(char **env);
void		run_pwd(void);
#endif