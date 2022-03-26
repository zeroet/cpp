/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_paint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytak <ytak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:01:49 by ytak              #+#    #+#             */
/*   Updated: 2021/11/02 11:19:45 by ytak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro_paint.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
			i++;
	}
}

void	ft_free(void)
{
	if (!TAB)
		return ;
	for (int i = 0; TAB[i]; i++)
		free(TAB[i]);
	free(TAB);
}

int		err_message(FILE *fd, int err)
{
	if (err == 2 && (err = 1))
		ft_putstr("Error: Operation file corrupted\n");
	else if (err == 1)
		ft_putstr("Error: argument\n");
	else
	{
		for (int i = 0; i < H; i++)
		{
			write(1, TAB[i], W);
			write(1, "\n", 1);
		}
	}
	if (fd)
		fclose(fd);
	ft_free();
	return (err);
}

int	ft_is_rec(float x, float y, t_draw *el)
{
	if (x < el->x || el->x + el->width < x || y < el->y || el->y + el->height < y)
		return (0);
	else if ( x - el->x < 1 || el->x + el->width -x < 1 || y - el->y < 1 || el->y + el->height - y < 1)
		return (1);
	return (2);
}

int main(int argc, char *argv[])
{
	FILE	*fd;
	t_draw	el;
	int		res;

	fd = NULL;
	if (argc != 2)
		return(err_message(fd, 1));
	if ((fd = fopen(argv[1], "r")))
	{
		if ((res = fscanf(fd, "%d %d %c", &W, &H, &BG)) == 3)
		{
			if (W > 0 && W <= 300 && H > 0 && H <= 300)
			{
				TAB = calloc(H + 1, sizeof(char *));
				if (!TAB)
				{
					ft_putstr("Error: Operation file corrupted\n");
					return (1);
				}
				for (int i = 0; i < H; i++)
				{
					TAB[i] = calloc(W + 1, sizeof(char));
					if (!TAB[i])
					{
						ft_free();
						ft_putstr("Error: Operation file corrupted\n");
						return (1);
					}
					memset(TAB[i], BG, W);
				}
				while (1)
				{
					res = fscanf(fd, "\n%c %f %f %f %f %c", &el.t, &el.x, &el.y, &el.width, &el.height, &el.c);
					if (res == -1)
						return (err_message(fd, 0));
					 if (res != 6 || el.width <= 0 || el.height <= 0 || (el.t != 'r' && el.t != 'R'))
						break ;
					for (int line = 0; line < H; line++)
					{
						for (int col = 0; col < W; col++)
						{
							if (ft_is_rec(col,line, &el) == 1)
								TAB[line][col] = el.c;
							else if (ft_is_rec(col, line, &el) == 2 && el.t == 'R')
								TAB[line][col] = el.c;
						}
					}
				}
			}
		}
	}
	return (err_message(fd, 2));
}

