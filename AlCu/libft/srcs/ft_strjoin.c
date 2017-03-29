/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:44:30 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:44:32 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	if ((join = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
	{
		join = ft_strcpy(join, s1);
		join = ft_strcat(join, s2);
	}
	return (join);
}
