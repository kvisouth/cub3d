/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 00:56:17 by kevisout          #+#    #+#             */
/*   Updated: 2025/09/14 01:05:24 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <X11/keysym.h>
# include <pthread.h>
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include "X11/X.h"

typedef struct s_data
{
	void	*mlx;
	void	*win;
}				t_data;