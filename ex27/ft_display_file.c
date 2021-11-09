/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:28:00 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/04 09:43:01 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	ft_display_file(char *av)
{
	int		fd;
	int		read_rt;
	char	buf[BUF_SIZE + 1];

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{	
		ft_putstr("open() error");
		return (1);
	}
	read_rt = read(fd, buf, BUF_SIZE);
	buf[read_rt] = '\0';
	ft_putstr(buf);
	return (0);
}
