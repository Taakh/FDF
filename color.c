/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 21:32:31 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/19 21:33:54 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		choose_color(int **map, int y, int x, int choose)
{
	if (choose == 1)
	{
		if ((map[y - 1][x] > 0 && map[y][x] > 0) || (map[y - 1][x] > 0 &&
					map[y][x] <= 0))
			return (0x1E7FCB);
		else
			return (0xF0E36B);
	}
	else
	{
		if ((map[y][x] > 0 && map[y][x + 1] > 0) || ((map[y][x] <= 0
						&& map[y][x + 1] > 0) || (map[y][x] > 0
							&& map[y][x + 1] <= 0)))
			return (0x1E7FCB);
		else
			return (0xF0E36B);
	}
}