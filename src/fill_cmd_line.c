/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_cmd_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:54:11 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 21:04:26 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

char	*fill_cmd_line(char **cmd, char *cmd_old)
{
	int	i;

	if (access(cmd_old, 0) == 0)
		return (ft_strdup(cmd_old));
	i = 0;
	while (cmd[i])
	{
		if (access(cmd[i], 0) == 0)
			return (cmd[i]);
		i++;
	}
	return (0);
}
