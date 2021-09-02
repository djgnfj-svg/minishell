/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 06:35:25 by ysong             #+#    #+#             */
/*   Updated: 2021/09/03 06:35:44 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void show_prompt(void)
{
	char cmds[1024];
	char minishell[10] = "minishell";
	getcwd(cmds,1024);
	write(1, cmds, ft_strlen(cmds));
	write(1, "/", 2);
	write(1, minishell, ft_strlen(minishell));
	write(1, "$ ", 3);
}