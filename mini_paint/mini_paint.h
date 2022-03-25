/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_paint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytak <ytak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:49:07 by ytak              #+#    #+#             */
/*   Updated: 2021/11/02 11:13:21 by ytak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_PAINT_H
#define MINI_PAINT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int		W;
int		H;
char	BG;
char	**TAB;

typedef struct	s_draw
{
	char	c;
	float	x;
	float	y;
	float	r;
	char	t;
}				t_draw;


#endif
