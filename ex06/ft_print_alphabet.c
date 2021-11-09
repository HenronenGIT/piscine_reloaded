/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:23:02 by hmaronen          #+#    #+#             */
/*   Updated: 2021/10/28 10:34:33 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	c = 'a';
	i = 0;
	while (i < 26)
	{
		ft_putchar(c);
		c = c + 1;
		i++;
	}
}
