/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_count_of_lines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:35:42 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 15:09:59 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

int	find_count_of_lines(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] && arr[i][0] != '\0')
		i++;
	return (i);
}
