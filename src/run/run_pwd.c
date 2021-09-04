/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_pwd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <ysong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 06:50:50 by ysong             #+#    #+#             */
/*   Updated: 2021/09/04 14:15:21 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void run_pwd(void)
{
	char *pwd;

	pwd=getcwd(0, 1024);
	write(1, pwd, ft_strlen(pwd));
	write(1, "\n", 1);
	free(pwd);

}