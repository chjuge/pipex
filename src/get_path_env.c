/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path_env.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:34:32 by mproveme          #+#    #+#             */
/*   Updated: 2022/01/13 19:36:29 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

char	**get_path_env(char **env)
{
	int		i;
	char	*path;
	char	**path_env;

	i = 0;
	while(env[i] && ft_strncmp(env[i], "PATH=", 5) != 0)
		i++;
	path = ft_strdup(env[i]);
	path_env = ft_split(path + 5, ':');
	free(path);
	return (path_env);
}
