#ifndef MICRO_H
# define MICRO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int H;
int W;
char BG;
char **TAP;

typedef struct s_draw
{
	char c;
	float x;
	float y;
	float width;
	float hight;
	char t;
} t_draw;

#endif
