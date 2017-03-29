/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:39:56 by acouliba          #+#    #+#             */
/*   Updated: 2015/01/05 18:39:57 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*result;
	int			b;
	int			e;
	int			mode;

	if ((s == NULL))
		return (NULL);
	e = ft_strlen(s);
	mode = -1;
	b = 0;
	if ((result = (char*)malloc((sizeof(*result)) * e + 1)))
	{
		ft_bzero(result, (e + 1));
		while ((s[b] == ' ' || s[b] == '\t' || s[b] == '\n') && s[b] != '\0')
			b++;
		while (s[e] == ' ' || s[e] == '\t' || s[e] == '\n' || s[e] == '\0')
			e--;
		while (b <= e)
			result[++mode] = s[b++];
		result[++mode] = '\0';
		return (result);
	}
	return (NULL);
}
