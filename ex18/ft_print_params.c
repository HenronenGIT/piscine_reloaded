/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:26:42 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/03 13:30:26 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			c = argv[j][i];
			ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
	return (0);
}
