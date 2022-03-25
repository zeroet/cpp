/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_paint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytak <ytak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:13:55 by ytak              #+#    #+#             */
/*   Updated: 2021/11/02 11:14:25 by ytak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_paint.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

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

int		ft_err_message(FILE *fd, int err)
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

int	main(int argc, char *argv[])
{
	t_draw	el;
	FILE	*fd;
	int		res;
	float	sqr;

	fd = NULL;
	if (argc != 2)
		return (ft_err_message(fd, 1));
	if ((fd = fopen(argv[1], "r")))
	{
		if ((res = fscanf(fd, "%d %d %c", &W, &H, &BG)) == 3)
		{
			if (W > 0 && W <= 300 && H > 0 && H <= 300)
			{
				TAB = calloc(H + 1, (sizeof (char *)));
				if (!TAB)
				{
					ft_putstr("Error: Operation file corrupted\n");
					return (1);
				}
				for (int i = 0; i < H; i++)
				{
					TAB[i] = calloc(W + 1, (sizeof(char)));
					if (!TAB[i])
					{
						ft_free();
						ft_putstr("Error: argument\n");
						return (1);
					}
					memset(TAB[i], BG, W);
				}
				while (1)
				{
					res = fscanf(fd, "\n%c %f %f %f %c", &el.t, &el.x, &el.y, &el.r, &el.c);
					if (res == -1)
						return (ft_err_message(fd, 0));
					else if (res != 5 || el.r <= 0 || (el.t != 'c' && el.t != 'C'))
						break ;
					for (int line = 0; line < H; line++)
					{
						for (int col = 0; col < W; col++)
						{
							sqr = sqrtf((line - el.y) * (line - el.y) + (col - el.x) * (col - el.x));
							if (sqr <= el.r)
							{
								if (el.t == 'c' && sqr + 1 > el.r)
									TAB[line][col] = el.c;
								else if (el.t == 'C')
									TAB[line][col] = el.c;
							}
						}
					}
				}
			}
		}
	}
	return (ft_err_message(fd, 2));
}

