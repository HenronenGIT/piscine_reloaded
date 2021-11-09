/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:21:57 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/03 13:24:29 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	doubled;

	i = 0;
	if (nb < 0)
		return (0);
	while (i != 46341)
	{
		doubled = i * i;
		if (doubled == nb)
			return (i);
		i++;
		doubled = 0;
	}
	i = 0;
	return (i);
}
