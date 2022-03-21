/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:29:53 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/21 21:33:21 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

static void	free_array(char **arr)
{
	int	i;

	if (!arr)
	{
		printf("got Null\n");
		return ;
	}
	i = 0;
	while (arr[i])
	{
		printf("--> trying to free <--%s  ---> %p\n", arr[i], arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	free_all(t_store *st)
{
	if (st->cmd1_final)
		free(st->cmd1_final);
	if (st->cmd2_final)
		free(st->cmd2_final);
	 free_array(st->cmd1);
	 free_array(st->cmd2);
	 free_array(st->parsed_path);
	// free_array(st->cmd1_pth);
	// free_array(st->cmd2_pth);
}