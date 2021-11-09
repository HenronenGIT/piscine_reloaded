/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:37:28 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/03 13:32:29 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	while (src[i] != 0)
		i++;
	cpy = malloc(sizeof(*src) * (i + 1));
	i = 0;
	while (src[i] != 0)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
