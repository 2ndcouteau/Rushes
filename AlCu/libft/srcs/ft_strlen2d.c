/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:44:41 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:44:43 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen2d(char **t)
{
	int		i;

	i = 0;
	while (t[i])
		i++;
	return (i);
}
