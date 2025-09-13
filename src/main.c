/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 00:54:37 by kevisout          #+#    #+#             */
/*   Updated: 2025/09/14 01:22:06 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

// Return 1 if there is 1 argument (ac == 2)
int parse_numbers_of_args(int ac)
{
	if (ac != 2)
	{
		printf("Error\nWrong number of arguments\n");
		return (0);
	}
	return (1);
}

// Return 1 if the file format is correct (.cub)
int	parse_args_check_format(int ac, char **av)
{
	int	len;

	if (!parse_numbers_of_args(ac))
		return (0);
	len = ft_strlen(av[1]);
	if (len < 5 || ft_strncmp(&av[1][len - 4], ".cub", 4) != 0)
	{
		printf("Error\nWrong file format\n");
		return (0);
	}
	return (1);
}

// Return 1 if the file exists and can be opened
int	parse_file_exist(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		printf("Error\nFile does not exist or cannot be opened\n");
		return (0);
	}
	close(fd);
	return (1);
}

// Return 1 if the argument is valid
int	parse_args(int ac, char **av)
{
	if (!parse_numbers_of_args(ac))
		return (0);
	if (!parse_args_check_format(ac, av))
		return (0);
	if (!parse_file_exist(av[1]))
		return (0);
	return (1);
}

int	parsing(int ac, char **av)
{
	if (!parse_args(ac, av))
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	if (!parsing(ac, av))
		return (0);
	return (1);
}
