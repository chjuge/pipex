/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_open.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:07:49 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 19:26:38 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

int	try_open_r(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		perror(path);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

int	try_open_w(char *path)
{
	int	fd;

	fd = open(path, O_CREAT | O_TRUNC | O_RDWR, 0000644);
	if (fd < 0)
	{
		perror("Can't write into (create) file");
		exit(EXIT_FAILURE);
	}
	return (fd);
}
