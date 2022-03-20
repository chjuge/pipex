/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:11:16 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/20 19:20:41 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

static char	**join_null(char **arr)
{
	char	**new_arr;
	int	len;
	int	i;

	new_arr = malloc(sizeof(char *) * len);
	while (arr[i]) /// не дописал тут
		len++;
	
}

char	**get_cmd(char *str)
{
	char	**res;

	res = ft_split(str, " ");
	res = join_null(res);
	return (res);
}