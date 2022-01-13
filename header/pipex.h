/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:58:07 by mproveme          #+#    #+#             */
/*   Updated: 2022/01/13 19:53:26 by mproveme         ###   ########.fr       */
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

void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int	try_open_r(char *path);
int	try_open_w(char *path);
int	ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strdup(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
char	**get_path_env(char **env);

#endif