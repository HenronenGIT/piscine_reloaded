/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:18:27 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/02 17:43:42 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	count;
	int	i;
	int	tmp;

	tmp = 0;
	i = 0;
	count = 0;
	while (tab[i])
	{
		tmp = f(tab[i]);
		if (tmp == 1)
			count++;
		else
			tmp = 0;
		i++;
	}
	return (count);
}
