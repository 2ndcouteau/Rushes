/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:52:00 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:52:02 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstrdup(char *s1, char *s2)
{
	int		i;
	char	*str;
	char	*start_str;

	if (!(start_str = ft_strstr(s1, s2)))
		return (NULL);
	i = ft_strlen(s2);
	str = ft_strsub(start_str, 0, i);
	return (str);
}
