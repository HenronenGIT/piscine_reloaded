/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:18:48 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/03 13:00:04 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_file(char *av);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else
		ft_display_file(av[1]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
