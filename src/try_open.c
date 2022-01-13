/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_open.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:07:49 by mproveme          #+#    #+#             */
/*   Updated: 2022/01/13 19:27:19 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

int	try_open_r(char *path)
{
	int	fd;

	if (access(path, R_OK) < 0)
	{
		perror("Can't read from file");
		exit(EXIT_FAILURE);
	}
	fd = open(path, O_RDONLY);
	return (fd);
}

int	try_open_w(char *path)
{
	int	fd;

	fd = open(path, O_CREAT);
	if (fd < 0)
	{
		perror("Can't write into file");
		exit(EXIT_FAILURE);
	}
	return (fd);
}
