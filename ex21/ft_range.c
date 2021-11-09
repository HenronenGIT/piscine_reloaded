/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:24:47 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/04 09:17:40 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*arr;

	j = min;
	i = 0;
	if (min > max || min == max)
		return (NULL);
	while (j < max)
	{
		j++;
		i++;
	}
	arr = malloc(sizeof(*arr) * (i));
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
