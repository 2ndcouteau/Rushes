/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 18:06:06 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 18:04:26 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

t_vect	vect(float x, float y)
{
	t_vect	vec;

	vec.x = x;
	vec.y = y;
	return (vec);
}
