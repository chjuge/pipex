/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_and_parent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:27:16 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 19:25:16 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

void	call_child1(t_store *store, char **envp, char *file)
{	
	store->file_in = try_open_r(file);
	dup2(store->file_in, 0);
	dup2(store->pipe[1], 1);
	close(store->pipe[0]);
	if (-1 == (execve(store->cmd1_final, store->cmd1, envp)))
	{
		perror("command not found");
		exit(127);
	}
}

void	call_child2(t_store *store, char **envp, char *file)
{
	store->file_out = try_open_w(file);
	dup2(store->pipe[0], 0);
	dup2(store->file_out, 1);
	close(store->pipe[1]);
	if (-1 == (execve(store->cmd2_final, store->cmd2, envp)))
	{
		perror("command not found");
		exit(127);
	}
}
