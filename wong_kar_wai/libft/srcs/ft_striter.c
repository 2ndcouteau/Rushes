/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:11:00 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/08 18:04:12 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striter(char *s, void (*f)(char *))
{
	unsigned int	index;

	index = 0;
	if (s && f)
	{
		while (s[index])
		{
			f(&s[index]);
			index++;
		}
	}
}
