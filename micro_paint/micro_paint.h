/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_paint.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytak <ytak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:17:37 by ytak              #+#    #+#             */
/*   Updated: 2021/11/02 11:18:41 by ytak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MICRO_PAINT_H
#define MICRO_PAINT_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int		W;
int		H;
char	BG;
char	**TAB;

typedef	struct	s_draw
{
	char	t;
	float	x;
	float	y;
	float	width;
	float	height;
	char	c;
}				t_draw;

#endif
