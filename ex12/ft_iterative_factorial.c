/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:34:16 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/03 13:24:01 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	newnb;

	newnb = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb != 1)
		{
			newnb = newnb * nb;
			nb--;
		}
	}
	return (newnb);
}
