/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:40:06 by mproveme          #+#    #+#             */
/*   Updated: 2022/03/20 18:24:34 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pipex.h"

static void print_all(char **env)
{
	int	i;

	i = 0;
	write(1, "\n\n", 2);
	while (env[i])
	{
		printf("'%s'\n", env[i]);
		i++;
	}
}

int	main(int argc, char **argv, char **envp)
{
	int	file_in;
	int	file_out;
	int	fd[2];
	char	**path_env;

	if (argc != 5)
	{
		ft_putstr_fd("Wrong number of params\n", 2);
		exit(EXIT_FAILURE);
	}
	fd[0] = try_open_r(argv[1]);
	fd[1] = try_open_w(argv[4]);

	
	// path_env = get_path_env(envp);

}