/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 21:32:31 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/19 21:34:03 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "get_next_line.h"
# include "libft/libft.h"

typedef struct	s_point
{
	int		x;
	int		y;
	int		z;
}				t_point;

typedef struct	s_img
{
	void	*img;
	int		bpp;
	int		size_line;
	int		endian;
	char	*data;
	int		height;
	int		width;
}				t_img;

typedef struct	s_env
{
	void	*mlx;
	void	*win;
	int		height;
	int		width;
	t_img	img;
}				t_env;

int		ft_abs(int a, int b);
void	calc_stop(int x, int y, int **map, int *stop);
void	draw_pixel(t_img *img, int heigth, int width, int color);
int		**get_map(char *file);
void	draw_line(t_img *img,  int **map, int y, int x);
void	ft_draw_line(t_img *img, t_point *p1, t_point *p2, int color);
int		ft_abs(int a, int b);
void	calc_coord(t_point *coord, int x, int y, int **map);
int		choose_color(int **map, int y, int x, int choose);

#endif
