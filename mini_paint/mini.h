#ifndef MINI_H
# define MINI_H

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int W;
int H;
char BG;
char **TAP;

typedef struct s_draw
{
	char c;
	float x;
	float y;
	float r;
	char t;
} t_draw;

#endif
