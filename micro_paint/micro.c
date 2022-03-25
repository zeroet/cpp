#include "micro.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i=0;

	while (str[i])
	{	
		ft_putchar (str[i])
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

int err_message(FILE *fd, int err)
{
	if (err == 2 && (err = 1))
		ft_putstr("Error: Operation file corruption\n");
	else if (err == 1)
		ft_putshtr("Error: arguments\n");
	else
	{
		for (int i = 0; i < H; i++)
		{
			write(1, TAP[i], W);
			write(1, "\n", 1);
		}
	}
	if (fd)
		fclose(fd);
	ft_free();
	return (err);
}

int ft_is_rec(float x, float y, t_draw *el)
{
	if (x < el->x || el->x + el->width < x || y < el->y || el->y + el->height < y)
		return (0);
	else if (x - el->x < 1 || el->x + el->width - x < 1 || y - el->y < 1 || el->y + el->hight - y < 1)
		return (1);
	return (2);
}

int main (int ac, char **av)
{
	FILE *fd;
	int res;
	t_draw el;

	fd =NULL;
	if (ac != 2)
		return (error_message(fd, 1));
	if (fd =fopen(argv[1], "r"))
	{
		if ((fscanf(fd, "%d %d %c", &W, &H, &BG)) == 3)
		{
			if (W > 0 && W <= 300 && H > 0 && H <= 300)
			{
				TAP = calloc(H + 1, sizeof(char *));
				if (!TAP)
				{
					ft_putstr("Error: Operation file corruption\n");
					return (1);
				}
				for (int i = 0; i < H; i++)
				{
					TAP[i] = calloc(W + 1, sizeof(char *));
					if (!TAP[i])
					{
						ft_free();
						ft_putstr("Error: Operation file curruption\n");
						return (1);
					}
					memset(TAP[i], BG, W);
				}
				while (1)
				{
					res = fscanf(fd, "\n%c %f %f %f %c", &el.t, &el.x, &el.y, &el.width, &el.hight, &el.c);
					if (res = -1)
						return (err_message(fd, 0));
					if (res != 6 || el.width <= 0 || el.hight <= 0 || (el.t != 'r' || el.t != 'R'))
						break ;
					for (int line = 0; line < H; line++)
					{
						for(int col = 0; col < W; col++)
						{
							if (ft_is_rec(col, line, &el) == 1)
								TAB[line][col] = el.c;
							else if (ft_is_rec(col,line, &el) == 2 && el.t == 'R')
								TAB[line][col] = el.c;
						}
					}
				}
			}
		}
	}
	return (err_message(fd, 2);
}

			}
			

}
