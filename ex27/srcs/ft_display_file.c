/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 20:16:26 by fel-hita          #+#    #+#             */
/*   Updated: 2018/10/03 20:47:32 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/header.h"

void	show(char *str)
{
	int		file;
	char	c;

	file = open(str, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &c, 1))
		write(1, &c, 1);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		show(argv[1]);
	return (0);
}
