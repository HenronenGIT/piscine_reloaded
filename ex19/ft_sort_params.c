/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:30:40 by hmaronen          #+#    #+#             */
/*   Updated: 2021/12/11 11:30:43 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char const *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s2 [i] != '\0' && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_print_array(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_swap_array(char **argv1, char **argv2)
{
	char	*temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

void	ft_sort_params(int argc, char **argv)
{
	size_t	i;

	argc = 0;
	i = 0;
	while (argv[i] != NULL)
	{
		if (argv[i + 1] == NULL)
			break ;
		if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
		{
			ft_swap_array(&argv[i], &argv[i + 1]);
			i = 0;
		}
		else
			i++;
	}
	ft_print_array(argv);
}

int	main(int argc, char **argv)
{
	argc = 0;
	ft_sort_params(argc, &argv[1]);
	return (0);
}
