/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:03:32 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	load_floor_wall_sprites(t_data *data)
{
	char	*hex;
	char	*file_path;
	int		width;
	int		height;
	int		i;

	hex = ft_strdup(HEX_UPPER);
	data->floor = mlx_xpm_file_to_image(data->mlx, \
		"./assets/grass_dirt15.xpm", &width, &height);
	if (!data->floor)
		end_game("Failed to load floor sprite.");
	file_path = ft_strdup("./assets/fence_0.xpm");
	i = 0;
	while (i < 16)
	{
		file_path[15] = hex[i];
		data->walls[i] = mlx_xpm_file_to_image(data->mlx, file_path, \
			&width, &height);
		if (!data->walls[i])
			end_game("Failed to load wall sprite.");
		i++;
	}
	free(hex);
	free(file_path);
}

static void	load_player_sprite(t_data *data)
{
	int		width;
	int		height;

	data->player.img = mlx_xpm_file_to_image(data->mlx, \
		"./assets/cat001.xpm", &width, &height);
	if (!data->player.img)
		end_game("Failed to load character sprite.");
}

static void	load_collectable_sprite(t_data *data)
{
	int		width;
	int		height;

	data->collectable.img = mlx_xpm_file_to_image(data->mlx, \
		"./assets/fish.xpm", &width, &height);
	if (!data->collectable.img)
		end_game("Failed to load collectable sprite.");
}

static void	load_exit_sprite(t_data *data)
{
	int		width;
	int		height;

	data->exit_img = mlx_xpm_file_to_image(data->mlx, \
		"./assets/stairs.xpm", &width, &height);
	if (!data->player.img)
		end_game("Failed to load exit sprite.");
}

int	load_sprites(t_data *data)
{
	load_floor_wall_sprites(data);
	load_player_sprite(data);
	load_collectable_sprite(data);
	load_exit_sprite(data);
	return (0);
}
