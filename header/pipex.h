/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:58:07 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 20:15:14 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>

typedef struct s_store
{
	int		pipe[2];
	pid_t	pid1;
	pid_t	pid2;
	int		file_in;
	int		file_out;
	int		status;
	char	**parsed_path;
	int		lines_cnt;
	char	**cmd1;
	char	**cmd2;
	char	**cmd1_pth;
	char	**cmd2_pth;
	char	*cmd1_final;
	char	*cmd2_final;
}	t_store;

void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		try_open_r(char *path);
int		try_open_w(char *path);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strdup(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
char	**parse_path(char **env);
char	*ft_strjoin(char const *s1, char const *s2);
char	**get_full_paths(char **paths, char **cmd, int strs_cnt);
int		find_count_of_lines(char **arr);
char	*fill_cmd_line(char **cmd, char *cmd_old);
void	call_child1(t_store *store, char **envp, char *file);
void	call_child2(t_store *store, char **envp, char *file);
void	free_all(t_store *st);

#endif