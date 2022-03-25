#include "mini.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while(str[i])
	{	
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_free(void)
{
	if (!TAP)
		return ;
	for (int i = 0; TAP[i]; i++)
		free(TAP[i]);
	free(TAP);
}

int	error_message(FILE *fd, int err)
{
	if (err == 2 && (err = 1))
		ft_putstr("Error: Operation file corrupted\n");
	else if (err == 1)
		ft_putstr("Error: arguments\n");
	else
	{
		for(int i = 0; i < H; i++)
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

int main(int ac, char *av[])
{
	FILE *fd;
	t_draw el;
	int res;
	float sqr;

	fd = NULL;
	if (ac != 2)
		return (error_message(fd, 1));
	if ((fd = fopen(av[1], "r")))
	{
		if ((res = fscanf(fd, "%d %d %c", &W, &H, &BG)) ==3)
		{
			if (W > 0 && W <= 300 && H > 0 && H <= 300)
			{
				TAP = calloc(H + 1, (sizeof(char *)));
				if (!TAP)
				{
					ft_putstr("Error: Operation file corruted\n");
					return (1);
				}
				for (int i = 0; i < H; i++)
				{
					TAP[i] = calloc(W + 1, (sizeof(char *)));
					if (!TAP[i])
					{
						ft_free();
						ft_putstr("Error: Operation file corrupted\n");
						return (1);
					}
					memset(TAP[i], BG, W);
				}
				while (1)
				{
					res = fscanf(fd, "\n%c %f %f %f %c", &el.t, &el.x, &el.y, &el.r, &el.c);
					if (res == -1)
						return (error_message(fd, 0));
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
									TAP[line][col] = el.c;
								else if (el.t == 'C')
									TAP[line][col] = el.c;
							}
						}
					}
				}
			}
		}
	}
	return (error_message(fd, 2));
}
	
