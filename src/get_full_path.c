/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_full_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:23:45 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 21:14:30 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

char	**get_full_paths(char **paths, char **cmd, int strs_cnt)
{
	char	**new_arr;
	int		i;
	char	*tmp_str;

	new_arr = malloc(sizeof(char *) * (strs_cnt + 1));
	i = 0;
	new_arr[strs_cnt] = 0;
	while (i < strs_cnt)
	{
		tmp_str = ft_strjoin(paths[i], "/");
		new_arr[i] = ft_strjoin(tmp_str, cmd[0]);
		free(tmp_str);
		printf("---> %s <---  --> %p <--\n", new_arr[i], new_arr[i]);
		i++;
	}
	return (new_arr);
}
