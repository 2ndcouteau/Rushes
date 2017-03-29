/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:12:12 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/08 19:24:18 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*result;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if ((result = (char*)malloc((len + 1) * sizeof(*result))))
	{
		while (i < len)
		{
			result[i] = s[start + i];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}
