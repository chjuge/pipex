/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:40:06 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 20:23:11 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

static t_store	fill_struct(char **argv, char **envp)
{
	t_store	st;

	st.cmd1 = ft_split(argv[2], ' ');
	st.cmd2 = ft_split(argv[3], ' ');
	st.parsed_path = parse_path(envp);
	st.lines_cnt = find_count_of_lines(st.parsed_path);
	st.cmd1_pth = get_full_paths(st.parsed_path, st.cmd1, st.lines_cnt);
	st.cmd2_pth = get_full_paths(st.parsed_path, st.cmd2, st.lines_cnt);
	st.cmd1_final = fill_cmd_line(st.cmd1_pth, st.cmd1[0]);
	st.cmd2_final = fill_cmd_line(st.cmd2_pth, st.cmd2[0]);
	return (st);
}

int	main(int argc, char **argv, char **envp)
{
	t_store	store;

	if (argc != 5)
	{
		ft_putstr_fd("Wrong number of params\n", 2);
		exit(EXIT_FAILURE);
	}
	store = fill_struct(argv, envp);
	pipe(store.pipe);
	store.pid1 = fork();
	if (store.pid1 < 0)
		exit(EXIT_FAILURE);
	if (store.pid1 == 0)
		call_child1(&store, envp, argv[1]);
	store.pid2 = fork();
	if (store.pid2 < 0)
		exit(EXIT_FAILURE);
	if (store.pid2 == 0)
		call_child2(&store, envp, argv[4]);
	close(store.pipe[0]);
	close(store.pipe[1]);
	waitpid(store.pid2, &store.status, 0);
	free_all(&store);
	return (WEXITSTATUS(store.status));
}
