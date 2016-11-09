/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:03:19 by gcadiou           #+#    #+#             */
/*   Updated: 2016/11/09 03:19:03 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "header.h"

#define BUF_SIZE 4096

int		good(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("error open\n");
			return (1);
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
		{
			ft_putstr("close error\n");
			return (1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (1);
	}
	if (argc < 2)
	{
		ft_puterror("File name missing.\n");
		return (1);
	}
	return (good(argc, argv));
}
